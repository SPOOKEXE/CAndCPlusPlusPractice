#include <iostream>
#include "vehicle.h"

using namespace std;
using namespace VehicleComposition;

AbstractComponent(string serial, string type) {
	this->Serial = serial;
	this->Type = type;
}

string AbstractComponent::getSerial() {
	return this->Serial;
}

void AbstractionComponent::setSerial(string serial) {
	this->Serial = serial;
}

string AbstractComponent::getType() {
	return this->Type;
}

void AbstractionComponent::setType(string type) {
	this->Type = type;
}

int main() {

	AbstractComponent test = AbstractComponent("ENGINE_ID_123", "Engine");
	test::outputComponent();

	return 0;
}
