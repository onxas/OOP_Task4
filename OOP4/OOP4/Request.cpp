#include "Request.h"

Request::Request(System::DateTime^ startTime, System::DateTime^ endTime, Comfort^ comfort, Capacity^ capacity, RequestType type) {
	this->startTime = startTime;
	this->endTime = endTime;
	this->comfort = comfort;
	this->capacity = capacity;
	this->type = type;
}

System::DateTime^ Request::getStartTime() {
	return startTime;
}

System::DateTime^ Request::getEndTime() {
	return endTime;
}

RequestType Request::getType() {
	return type;
}

System::String^ Request::getTypeString() {
	RequestType type = getType();
	switch (type) {
	case ������������: return gcnew System::String("������������");
	case ���������: return gcnew System::String("���������");
	}
}

Comfort^ Request::getComfort() {
	return comfort;
}

Capacity^ Request::getCapacity() {
	return capacity;
}