#pragma once
#include "Comfort.h"
#include "Capacity.h"
#include "RequestType.h"
ref class Request
{
private:
	System::DateTime^ startTime;
	System::DateTime^ endTime;
	Comfort^ comfort;
	Capacity^ capacity;
	RequestType type;

public:Request(System::DateTime^ startTime, System::DateTime^ endTime, Comfort^ comfort, Capacity^ capacity, RequestType type);
	  System::DateTime^ getStartTime();
	  System::DateTime^ getEndTime();
	  Comfort^ getComfort();
	  Capacity^ getCapacity();
	  RequestType getType();
	  System::String^ getTypeString();
};

