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
	case �����������: return gcnew System::String("�����������");
	case ����������: return  gcnew System::String("����������");
	case ����������: return gcnew System::String("����������");
	case �������������: return  gcnew System::String("�������������");
	}
}