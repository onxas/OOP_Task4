#pragma once
#include "CapacityCode.h"
ref class Capacity
{
private:
	CapacityCode code;
	int price;
public:
	Capacity(CapacityCode code, int price);
	CapacityCode getCode();
	int getPrice();
	System::String^ getCapacityString();
};

