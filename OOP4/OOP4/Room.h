#pragma once
#include "Capacity.h"
#include "Comfort.h"
ref class Room
{
private:
	int price;
	Capacity^ capacity;
	Comfort^ comfort;
	bool available;
	System::DateTime^ leaveDate;
	System::DateTime^ inDate;
public:
	Room(Capacity^ capacity, Comfort^ comfort, int basePrice);
	Comfort^ getComfort();
	Capacity^ getCapacity();
	int getPrice();
	bool isAvalibale();
	void setAvaliable(bool a);
	System::DateTime^ getLeaveDate();
	void setLeaveDate(System::DateTime^ date);
	System::DateTime^ getInDate();
	void setInDate(System::DateTime^ date);
};

