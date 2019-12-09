#pragma once
#include "ComfortCode.h"
ref class Comfort
{
private:
	ComfortCode code;
	int price;
public:
	Comfort(ComfortCode code, int price);
	ComfortCode getCode();
	int getPrice();
	System::String^ getComfortString();
};

