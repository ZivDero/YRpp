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

	// Constructor
	AbstractClass() noexcept : AbstractClass(noinit_t()) JMP_THIS(0x410170);

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
	virtual AbstractType __stdcall What_Am_I() const JMP_THIS(0x410210);
	virtual int __stdcall Fetch_ID() const JMP_THIS(0x410220);
	virtual void __stdcall Create_ID() JMP_THIS(0x410230);

	/*
	**	INoticeSink
	*/
	virtual bool __stdcall Take_Notice(int command) JMP_THIS(0x410580);

	/*
	**	INoticeSource
	*/
	virtual void __stdcall Issue_Notice() JMP_THIS(0x410590);

	/*
	**	AbstractClass
	*/
	virtual ~AbstractClass() JMP_THIS(0x4101F0);

	virtual void Init() JMP_THIS(0x410470);
	virtual void Detach(AbstractClass* pTarget, bool all = true) JMP_THIS(0x410480);
	virtual AbstractType KindOf() const = 0;
	virtual int SizeOf() const = 0;
	virtual void ComputeCRC(CRCEngine& crc) const JMP_THIS(0x410410);
	virtual HousesType GetOwner() const JMP_THIS(0x410490);
	virtual HouseClass* GetOwningHouse() const JMP_THIS(0x4104A0);
	virtual int GetHeapID() const JMP_THIS(0x4104B0);
	virtual bool IsInactive() const JMP_THIS(0x410440);
	virtual CoordStruct GetCenterCoords() const JMP_THIS(0x4104C0);

	// Where this is moving, or a building's dock for a techno. IOW, a rendez-vous point
	virtual CoordStruct GetDestinationCoords(TechnoClass* pDocker = nullptr) const JMP_THIS(0x4104F0);

	virtual bool IsOnGround() const JMP_THIS(0x410520);
	virtual bool IsInAir() const JMP_THIS(0x410530);
	virtual CoordStruct GetCoords() const JMP_THIS(0x410540);
	virtual void AI() JMP_THIS(0x410570);

	// Exactly the same, return TechnoClass* if it's a unit/aircraft/building/infantry, nullptr otherwise
	TechnoClass* AsTechno() JMP_THIS(0x40DD20);
	TechnoClass* AsTechno2() JMP_THIS(0x40DD70);

	// Operator less for Alex's comparison
	bool operator<(const AbstractClass& that) const
	{
		return this->ID < that.ID;
	}

protected:
	AbstractClass(const noinit_t& noinit) {};

private:
	AbstractClass(const AbstractClass&) = delete;
	AbstractClass& operator=(const AbstractClass& that) JMP_THIS(0x588C10);

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
