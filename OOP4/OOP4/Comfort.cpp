#include "Comfort.h"
Comfort::Comfort(ComfortCode code, int price) {
	this->code = code;
	this->price = price;
}

ComfortCode Comfort::getCode() {
	return code;
}

int Comfort::getPrice() {
	return price;
}

System::String^ Comfort::getComfortString() {	
	switch (code) {
	case �������: return  gcnew System::String("�������");
	case ��������: return  gcnew System::String("��������");
	case ����: return  gcnew System::String("����");
	}
}