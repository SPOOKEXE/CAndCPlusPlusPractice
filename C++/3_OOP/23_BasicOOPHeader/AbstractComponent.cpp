#include <iostream>
#include <string>
#include "AbstractComponent.h"

using namespace std;
using namespace test

AbstractComponent::AbstractComponent(string serial, string type) {
	setSerial(serial);
	setType(type);
}

string AbstractComponent::getSerial() {
	return Serial;
}

string AbstractComponent::getType() {
	return Type;
}

void AbstractComponent::setSerial(string serial) {
	Serial = serial;
}

void AbstractComponent::setType(string type) {
	Type = type;
}

void AbstractComponent::outputComponent() {
	cout << "Component Info | " << this->Serial << " | " << this->Type << endl;
}
