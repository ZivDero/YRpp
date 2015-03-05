#pragma once

#include <FootClass.h>
#include <Helpers/Cast.h>

// Enumerates the cell offsets using the cell spread logic.
/*
	Enumeration starts at the center. Returned values are to be considered
	offsets, so the center is the origin.

	Offsets are returned in unspecified order, but all cells of CellSpread N
	are guaranteed to be returned before enumerating cells of N+1. This means
	that this class can extend or replace the original CellSpread table, as
	long as a single mechanism is used to complete a CellSpread distance.

	The algorithm does not generate any cell offset not in the requested
	CellSpread range.

	The following properties might change in the future:

	Currently, the implementation matches the output order of the original
	CellSpread table for values less than 11, except for the offsets 2 and 4
	(which are swapped here).

	The enumeration stops at Max not because of technical reasons, but because
	at some point is gets unfeasible to enumerate cell contents like this. A
	CellSpread of 256 contains 175789 cells. Input like 1000 to mean full map
	effect is a bad way to do something, and people should be punished for it.

	\author AlexB
*/
class CellSpreadEnumerator
{
	CellStruct current;
	size_t spread;
	size_t curspread;
	bool hasTwo;
	bool hadTwo;

public:
	static const size_t Max = 0x100u;

	CellSpreadEnumerator(size_t spread, size_t start=0u) : current(CellStruct()), spread(spread), curspread(0u), hasTwo(false), hadTwo(false) {
		if(spread > Max) {
			spread = Max;
		}

		reset(start);
	}

	operator bool () const {
		return curspread <= spread;
	}

	const CellStruct& operator * () const {
		return current;
	}

	CellSpreadEnumerator& operator ++ () {
		this->next();
		return *this;
	}

	void operator ++ (int) {
		this->next();
	}

protected:
	void reset(size_t spread) {
		curspread = spread;
		current.X = spread ? -1 : 0;
		current.Y = -static_cast<short>(spread);
		hasTwo = true;
		hadTwo = true;
	}

	bool next() {
		// already done?
		if(!*this) {
			return false;
		}

		// center or top-right-most cell finishes this
		// round. move to the start of the next one.
		if((current == CellStruct::Empty) || (current.X == 1 && current.Y == static_cast<short>(curspread))) {
			reset(curspread + 1);
			return *this;
		}

		// finish this line
		if(hasTwo) {
			current.X++;

			// quick way to finish first and last line
			hasTwo = (current.X == 0);
			return true;
		}

		// if we are on the left side, mirror to the
		// right side and restore hasTwo.
		if(current.X < 0) {
			current.X = -current.X;
			hasTwo = hadTwo;
			return true;
		}

		// move up to the next line
		current.Y++;

		// map upper part to lower part
		// this is reverted later
		bool changeSign = (current.Y > 0);
		if(changeSign) {
			current.Y = -current.Y;
		}

		// for each line up, go two steps left
		current.X = (static_cast<short>(curspread) + current.Y) * -2 - 1;

		int diff = current.X - current.Y;
		hasTwo = diff >= 0;
		hadTwo = hasTwo;

		if(diff == -1) {
			// "clip" the one
			current.X++;
		} else if(diff < 0) {
			// get from other direction
			current.X = -current.Y / 2 - static_cast<short>(curspread);
		}

		// revert the sign change
		if(changeSign) {
			current.Y = -current.Y;
		}

		return true;
	}
};

// Enumerates the cells from start to end.
/*
	If start equals end, at last this cell is returned.

	\author AlexB
*/
class CellSequenceEnumerator
{
	CellStruct current;
	CellStruct end;
	CellStruct offset;
	CellStruct distance;
	int value;
	bool valid;

public:
	CellSequenceEnumerator(const CellStruct& start, const CellStruct& end) :
		current(start),
		end(end),
		valid(true)
	{
		auto const difference = end - start;

		offset = {
			static_cast<short>(Math::sgn(difference.X)),
			static_cast<short>(Math::sgn(difference.Y))
		};

		distance = { difference.X * offset.X * 2, difference.Y * offset.Y * 2 };

		if(distance.X > distance.Y) {
			value = distance.Y - distance.X / 2;
		} else {
			value = distance.X - distance.Y / 2;
		}
	}

	explicit operator bool () const {
		return valid;
	}

	const CellStruct& operator * () const {
		return current;
	}

	CellSequenceEnumerator& operator ++ () {
		next();
		return *this;
	}

	void operator ++ (int) {
		next();
	}

protected:
	void next()  {
		if(current == end) {
			valid = false;

		// slower path, only taken if necessary
		} else if(offset.X == 0 || offset.Y == 0) {
			// only one component changes
			current += offset;

		} else {
			// Bresenham algo, with changes to not move
			// diagonally (iow: two cells in one step)
			if(distance.X > distance.Y) {
				if(value < 0) {
					value += distance.Y;
					current.X += offset.X;
				} else {
					value -= distance.X;
					current.Y += offset.Y;
				}
			} else {
				if(value < 0) {
					value += distance.X;
					current.Y += offset.Y;
				} else {
					value -= distance.Y;
					current.X += offset.X;
				}
			}
		}
	}
};
