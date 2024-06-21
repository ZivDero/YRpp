#pragma once

#include <GeneralDefinitions.h>

struct StorageClass
{
	float GetAmount(int index) const
	{ JMP_THIS(0x6C9680); }

	float GetTotalAmount() const
	{ JMP_THIS(0x6C9650); }

	float AddAmount(float amount, int index)
	{ JMP_THIS(0x6C9690); }

	float RemoveAmount(float amount, int index)
	{ JMP_THIS(0x6C96B0); }

	int GetTotalValue() const
	{ JMP_THIS(0x6C9600); }

	float Tiberium1;
	float Tiberium2;
	float Tiberium3;
	float Tiberium4;
};
