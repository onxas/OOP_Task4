#include "Room.h"

Room::Room(Capacity^ capacity, Comfort^ comfort) {
	this->capacity = capacity;
	this->comfort = comfort;
	this->price = capacity->price + comfort->price;
}