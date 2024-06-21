#pragma once

#include <GeneralDefinitions.h>

struct StorageClass
{
public:
	StorageClass() JMP_THIS(0x6C95E0);

	int GetTotalValue() const JMP_THIS(0x6C9600);
	float GetTotalAmount() const JMP_THIS(0x6C9650);
	float GetAmount(TiberiumType type) const JMP_THIS(0x6C9680);
	float IncreaseAmount(float amount, TiberiumType type) JMP_THIS(0x6C9690);
	float DescreaseAmount(float amount, TiberiumType type) JMP_THIS(0x6C96B0);

	StorageClass operator+(const StorageClass& that) const JMP_THIS(0x6C96E0);
	StorageClass operator+=(const StorageClass& that) const JMP_THIS(0x6C9740);
	StorageClass operator-(const StorageClass& that) const JMP_THIS(0x6C9780);
	StorageClass operator-=(const StorageClass& that) const JMP_THIS(0x6C97E0);

	int FirstUsedSlot() JMP_THIS(0x6C9820);

private:
	float Tiberium[TIBERIUM_COUNT];
};
