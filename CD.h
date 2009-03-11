#ifndef CD_H
#define CD_H

#include <YRPPCore.h>

class CDDriveManagerClass
{
public:
	//Static
	static CDDriveManagerClass* Global()
		{ return *((CDDriveManagerClass**)0x89E414); }

protected:
	//CTOR
	CDDriveManagerClass()
		JMP_THIS(0x4E6070);

public:
	/*
	Retrieves the number of the currently inserted disc
	0 = RA2 Allied,
	1 = RA2 Soviet,
	2 = YR
	*/
	int GetCDNumber()
		JMP_THIS(0x4A80D0);

	//Properties
	PROPERTY_ARRAY(int, CDDriveNames, 26); //int + 'A' would be the drive's name
	PROPERTY(int, NumCDDrives);
	PROPERTY(DWORD, unknown_6C);
};

class CD
{
public:
	virtual bool ForceAvailable(int nCDNumber) R0;
	virtual bool InsertCDDialog() R0;
	virtual void SwapToDisk() R0;

	PROPERTY(DWORD, unknown_04);

protected:
	CD() RX;
}
