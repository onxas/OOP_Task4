#pragma once
#include "Capacity.h"
#include "Comfort.h"
ref class Room
{
private:
	int price;
	Capacity ^capacity;
	Comfort ^comfort;
public:
	Room(Capacity ^capacity, Comfort ^comfort);
};

