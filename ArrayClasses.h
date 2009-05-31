#ifndef DVC_H
#define DVC_H

#include <YRPPCore.h>
#include <objidl.h>
#include <Helpers\Macro.h>

//========================================================================
//=== VectorClass ========================================================
//========================================================================

template <typename T> class VectorClass
{
public:
	virtual ~VectorClass() {
		Clear();
	}

	virtual bool IsEqual(VectorClass* pVec) {
		if(Capacity == pVec->Capacity) {
			if(Capacity == 0) {
				return true;
			}

			for(int i = 0; i < Capacity; ++i) {
				if(Items[i] == pVec->Items[i]) {
					continue; // kapow! don't rewrite this to != unless you know why you're doing it
				}
				return false;
			}
			return true;
		}
		return false;
	}


	virtual bool SetCapacity(int nNewCapacity, T* pMem) {
		if(nNewCapacity != 0) {
			IsInitialized = false;

			bool bMustAllocate = (pMem == NULL);
			if(!pMem) {
				pMem = new T[nNewCapacity];
			}

			IsInitialized = true;
			if(!pMem) {
				return false;
			}

			if(Items) {
				int n = (nNewCapacity < Capacity) ? nNewCapacity : Capacity;
				for(int i = 0; i < n; ++i) {
					pMem[i] = Items[i];
				}

				if(IsAllocated) {
					delete Items;
					Items = NULL;
				}
			}

			IsAllocated = bMustAllocate;
			Items = pMem;
			Capacity = nNewCapacity;
		} else {
			Clear();
		}
		return true;
	}

	virtual void Clear() {
		if(Items && IsAllocated) {
			delete Items;
			Items = NULL;
		}
		IsAllocated = false;
		Capacity = 0;
	}

	virtual int FindItemIndex(T tItem) {
		if(!IsInitialized) {
			return 0;
		}

		for(int i = 0; i < Capacity; ++i) {
			if(Items[i] == tItem) {
				return i;
			}
		}

		return -1;
	}

	virtual int GetItemIndex(T* pItem) {
		if(!IsInitialized) return 0;
		return (pItem - Items) / sizeof(T);
	}

	virtual T GetItem(int i) {
		return Items[i];
	}

	T& operator [](int i) {
		return Items[i];
	}

	VectorClass() {
		Items = NULL;
		Capacity = 0;
		IsInitialized = true;
		IsAllocated = false;
	}

	VectorClass(int nCapacity, T* pMem) {
		Items = NULL;
		Capacity = nCapacity;
		IsInitialized = true;
		IsAllocated = false;

		if(nCapacity != 0) {
			if(pMem) {
				Items = pMem;
			} else {
				Items = new T[nCapacity];
				IsAllocated = true;
			}
		}
	}

	void Save(IStream *pStm) {
		int ii = Capacity;
		pStm->Write(&ii, 4u, 0);
		for ( ii = 0; ii < Capacity; ++ii ) {
			pStm->Write(&(this->Items[ii]), 4, 0);
		}
	}

	void Load(IStream *pStm, bool bSwizzle = 1) {
		int ii = 0;
		this->Clear();
		pStm->Read(&ii, 4u, 0);
		this->SetCapacity(ii, NULL);
		for ( ii = 0; ii < Capacity; ++ii ) {
			pStm->Read(&(Items[ii]), 4, 0);
		}
		if(bSwizzle) {
			for ( ii = 0; ii < Capacity; ++ii ) {
				SWIZZLE(Items[ii]);
			}
		}
	}

	PROPERTY(T*, Items);
	PROPERTY_READONLY(int, Capacity);
	PROPERTY(bool, IsInitialized);
	PROPERTY(bool, IsAllocated);
};

//========================================================================
//=== DynamicVectorClass =================================================
//========================================================================

template <typename T> class DynamicVectorClass : public VectorClass<T>
{
public:
	virtual ~DynamicVectorClass() {
		Clear();
	}

	void Save(IStream *pStm) {
		int ii = Count;
		pStm->Write(&ii, 4u, 0);
		for ( ii = 0; ii < Count; ++ii ) {
			pStm->Write(&(Items[ii]), 4, 0);
		}
	}

	void Load(IStream *pStm, bool bSwizzle) {
		int ii = 0;
		this->Clear();
		pStm->Read(&ii, 4u, 0);
		this->SetCapacity(ii, NULL);
		for ( int jj = 0; jj < ii; ++jj ) {
			pStm->Read(&(Items[jj]), 4, 0);
		}
		this->Count = ii;
		if(bSwizzle) {
			for ( ii = 0; ii < Count; ++ii ) {
				SWIZZLE(Items[ii]);
			}
		}
	}

	T* start() {
		if(!this->IsInitialized) {
			return NULL;
		}
		return &this->Items[0];
	}

	T* end() {
		if(!this->IsInitialized) {
			return NULL;
		}
		return &this->Items[this->Count];
	}

	virtual bool SetCapacity(int nNewCapacity, T* pMem) {
		bool bRet = VectorClass::SetCapacity(nNewCapacity, pMem);

		if(Capacity < Count) {
			Count = Capacity;
		}

		return bRet;
	}

	virtual void Clear() {
		Count = 0;
		VectorClass::Clear();
	}

	// this doesn't work right for some reason, see Bugfixes.cpp TechnoTypeClass_GetCameo
	// passing a pointer that's in the array still returns -1
	virtual int FindItemIndex(T tItem) {
		if(!IsInitialized) {
			return -1;
		}

		for(int i = 0; i < Count; i++) {
			if(Items[i] == tItem) {
				return i;
			}
		}

		return -1;
	}

	DynamicVectorClass() : VectorClass() {
		Count = 0;
		CapacityIncrement = 10;
	}

	DynamicVectorClass(int nCapacity, T* pMem) : VectorClass<T>(nCapacity, pMem) {
		Count = 0;
		CapacityIncrement = 10;
	}

public:
	bool AddItem(T tItem) {
		if(Count >= Capacity) {
			if(IsAllocated || Capacity == 0) {
				if(CapacityIncrement > 0) {
					if(!SetCapacity(Capacity + CapacityIncrement, NULL)) {
						return false;
					}
				} else {
					return false;
				}
			} else {
				return false;
			}
		}

		Items[Count++] = tItem;
		return true;
	}

	bool RemoveItem(int nIndex) {
		if(nIndex >= 0 && nIndex < Count) {
			--Count;
			if(nIndex < Count) {
				for(int i = nIndex; i < Count; i++) {
					Items[i] = Items[i+1];
				}
			}
			return true;
		}
		return false;
	}

	PROPERTY(int, Count);
	PROPERTY(int, CapacityIncrement);
};

//========================================================================
//=== TypeList ===========================================================
//========================================================================

template <typename T> class TypeList : public DynamicVectorClass<T>
{
public:
	virtual ~TypeList() {
		Clear();
	}

	TypeList() : DynamicVectorClass() {

	}

	TypeList(int nCapacity, T* pMem) : DynamicVectorClass(nCapacity, pMem) {

	}

	PROPERTY(DWORD, unknown_18);
};

//========================================================================
//=== CounterClass =======================================================
//========================================================================

class CounterClass : public VectorClass<int>
{
public:
	virtual ~CounterClass() {
		if(Items && IsAllocated) {
			delete Items;
			Items = NULL;
		}

		IsAllocated = false;
		Capacity = 0;
		Count = 0;
	}

	virtual void Clear() {
		for(int i = 0; i < Capacity; ++i){
			Items[i] = 0;
		}

		Count = 0;
	}

	int GetItemCount(int nIndex)
		JMP_THIS(0x49FAE0);

	CounterClass() : VectorClass<int>()
		{ Count = 0; }

	int Increment(int nIndex)
		JMP_THIS(0x49FA00);

	int Decrement(int nIndex)
		JMP_THIS(0x49FA70);

	PROPERTY(int, Count);	//not sure what this is, but it's different from DVC's count
};

#endif
