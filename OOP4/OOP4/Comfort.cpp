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
	case Простой: return  gcnew System::String("Простой");
	case полулюкс: return  gcnew System::String("Полулюкс");
	case люкс: return  gcnew System::String("люкс");
	}
}