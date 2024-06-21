#pragma once

#include <Interfaces.h>
#include <GeneralDefinitions.h>
#include <GeneralStructures.h>
#include <ArrayClasses.h>
#include <IndexClass.h>
#include <GameStrings.h>

class TechnoClass;
class HouseClass;
class CRCEngine;

/*
**	This class is the base class for all game objects that have an existence on the
**	battlefield.
*/
class NOVTABLE AbstractClass : public IPersistStream, public IRTTITypeInfo, public INoticeSink, public INoticeSource
{
public:
	static constexpr constant_ptr<DynamicVectorClass<AbstractClass*>, 0xB0F720u> const Array{};
	static constexpr reference<IndexClass<int, int>, 0xB0E840u> const TargetIndex{};

	/*
	**	IUnknown
	*/
	virtual HRESULT __stdcall QueryInterface(REFIID iid, void** ppvObject) JMP_THIS(0x410260);
	virtual ULONG __stdcall AddRef() JMP_THIS(0x410300);
	virtual ULONG __stdcall Release() JMP_THIS(0x410310);

	/*
	**	IPersistStream
	*/
	virtual HRESULT __stdcall IsDirty() JMP_THIS(0x410480);
	
	/*
	**	Load and save functions
	**	NOTE: THESE ARE NOT VIRTUAL
	*/
	HRESULT STDMETHODCALLTYPE Load(IStream *pStm) JMP_THIS(0x410380);
	HRESULT STDMETHODCALLTYPE Save(IStream *pStm, BOOL fClearDirty) JMP_THIS(0x410320);

	virtual HRESULT __stdcall GetSizeMax(ULARGE_INTEGER* pcbSize) JMP_THIS(0x4103E0);

	/*
	**	IRTTITypeInfo.
	*/
	virtual AbstractType __stdcall WhatAmI() const JMP_THIS(0x410210);
	virtual int __stdcall FetchID() const JMP_THIS(0x410220);
	virtual void __stdcall CreateID() JMP_THIS(0x410230);

	/*
	**	INoticeSink
	*/
	virtual bool __stdcall TakeNotice(int command) JMP_THIS(0x410580);

	/*
	**	INoticeSource
	*/
	virtual void __stdcall IssueNotice() JMP_THIS(0x410590);

	/*
	**	AbstractClass
	*/
	virtual ~AbstractClass() JMP_THIS(0x4101F0);

	virtual void Init() JMP_THIS(0x410470);
	virtual void Detach(AbstractClass* pAbstract, bool all) JMP_THIS(0x410480);
	virtual AbstractType KindOf() const = 0;
	virtual int SizeOf() const = 0;
	virtual void ComputeCRC(CRCEngine& crc) const JMP_THIS(0x410410);
	virtual HousesType GetOwner() const JMP_THIS(0x410490);
	virtual HouseClass* GetOwningHouse() const JMP_THIS(0x4104A0);
	virtual int GetHeapID() const JMP_THIS(0x4104B0);
	virtual bool IsInactive() const JMP_THIS(0x410440);
	virtual CoordStruct GetCenterCoords() const JMP_THIS(0x4104C0);

	// Where this is moving, or a building's dock for a techno. IOW, a rendez-vous point
	virtual CoordStruct GetTargetCoords(TechnoClass* pDocker = nullptr) const JMP_THIS(0x4104F0);

	virtual bool IsOnGround() const JMP_THIS(0x410520);
	virtual bool IsInAir() const JMP_THIS(0x410530);
	virtual CoordStruct GetCoords() const JMP_THIS(0x410540);
	virtual void AI() JMP_THIS(0x410570);

	// Exactly the same, return TechnoClass* if it's a unit/aircraft/building/infantry, nullptr otherwise
	TechnoClass* AsTechno() JMP_THIS(0x40DD20);
	TechnoClass* AsTechno2() JMP_THIS(0x40DD70);

	// Tracker.h
	static void DetachThisFromAll(AbstractClass* pAbstract, bool all = true) JMP_THIS(0x7258D0);
	static void RemoveAllInactive() JMP_STD(0x725C70);

	// Operator less for Alex's comparison
	bool operator<(const AbstractClass& rhs) const
	{
		return this->ID < rhs.ID;
	}

	AbstractClass& operator=(const AbstractClass& rhs) JMP_THIS(0x588C10);

protected:
	// Constructor
	AbstractClass() JMP_THIS(0x410170);
	AbstractClass(noinit_t) JMP_THIS(0x4101C0);

public:
	/*
	**	This specifies the unique ID number associated with the object.
	**	The ID number happens to match the index into
	**	the object heap appropriate for this object type.
	*/
	int ID;

	AbstractFlags AbstractFlags;

	DWORD unknown_18;
	int RefCount;
	bool Dirty;		// for IPersistStream.
};

template<typename T>
concept HasAbsVTable = std::is_base_of_v<AbstractClass,T> && requires {
	{ T::AbsVTable }-> std::convertible_to<uintptr_t>;
};

static_assert(sizeof(AbstractClass) == 0x24, "sizeof(AbstractClass)");
