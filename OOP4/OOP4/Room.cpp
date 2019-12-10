#include "Room.h"

Room::Room(Capacity^ capacity, Comfort^ comfort, int basePrice) {
	this->capacity = capacity;
	this->comfort = comfort;
	this->price = capacity->getPrice() + comfort->getPrice() + basePrice;
	this->available = true;
	this->leaveDate = nullptr;
	this->inDate = nullptr;
}

Capacity^ Room::getCapacity() {
	return capacity;
}

Comfort^ Room::getComfort() {
	return comfort;
}

int Room::getPrice() {
	return price;
}

bool Room::isAvalibale() {
	return available;
}

void Room::setAvaliable(bool a) {
	this->available = a;
}

System::DateTime^ Room::getLeaveDate() {
	return leaveDate;
}

void Room::setLeaveDate(System::DateTime^ date) {
	this->leaveDate = date;
}

System::DateTime^ Room::getInDate() {
	return inDate;
}

void Room::setInDate(System::DateTime^ date) {
	this->inDate = date;
}