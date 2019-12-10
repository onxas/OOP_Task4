#include "Capacity.h"
Capacity::Capacity(CapacityCode code, int price) {
	this->code = code;
	this->price = price;
}

CapacityCode Capacity::getCode() {
	return code;
}

int Capacity::getPrice() {
	return price;	
}

System::String^ Capacity::getCapacityString() {
	switch (code) {
	case Одноместный: return gcnew System::String("Одноместный");
	case Двуместный: return  gcnew System::String("Двуместный");
	case Трёхместный: return gcnew System::String("Трёхместный");
	case Четырёхместный: return  gcnew System::String("Четырёхместный");
	}
}