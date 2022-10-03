#include <iostream>
#include"vehicle.h"

using namespace std;
using namespace VehicleComposition;

// == ABSTRACT COMPONENT == //
AbstractComponent::AbstractComponent(string serial, string type) {
	this->Serial = serial;
	this->Type = type;
}

string AbstractComponent::getSerial() {
	return this->Serial;
}

void AbstractComponent::setSerial(string serial) {
	this->Serial = serial;
}

string AbstractComponent::getType() {
	return this->Type;
}

void AbstractComponent::setType(string type) {
	this->Type = type;
}

void AbstractComponent::outputComponent() {
	cout << "Component : " << this->Serial << " - " << this->Type << endl;
}

// == ENGINE COMPONENT == //
Engine::Engine(string serial, string type) : AbstractComponent(serial, type) {
	this->Serial = serial;
	this->Type = type;
}

void Engine::start() {
	cout << "Engine Started!" << endl;
	this->engineRunning = true;
}

void Engine::stop() {
	cout << "Engine Stopped!" << endl;
	this->engineRunning = false;
}

bool Engine::isRunning() {
	return this->engineRunning;
}

void Engine::outputComponent() {
	cout << "Engine Info | " << this->Serial << " | " << this->Type << " | Engine " << (isRunning() ? "Running" : "Stopped") << endl;
}

// == WHEEL COMPONENT == //
Wheel::Wheel(string serial, string type, float gripFactor) : AbstractComponent(serial, type) {
	this->GripFactor = gripFactor;
}

float Wheel::getGripFactor() {
	return this->GripFactor;
}

void Wheel::outputComponent() {
	cout << "Wheel Info | " << this->Serial << " | " << this->Type << " | Grip Factor " << getGripFactor() << endl;
}

// == ABSTRACT VEHICLE == //
AbstractVehicle::AbstractVehicle(Engine engine) : engine{engine} {

}

void AbstractVehicle::setEngine(Engine newEngine) {
	this->engine = newEngine;
}

Engine AbstractVehicle::getEngine() {
	return this->engine;
}

void AbstractVehicle::start() {
	cout << "Abstract Vehicle Starting" << endl;
	this->engine.start();
}

void AbstractVehicle::stop() {
	cout << "Abstract Vehicle Stopping" << endl;
	this->engine.stop();
}

void AbstractVehicle::outputComposition() {
	cout << "== Vehicle Composition ==" << endl;
	this->engine.outputComponent();
	cout << "== End Composition ==" << endl;
}

// == Abstract 4x4 Vehicle == //
Abstract4x4Vehicle::Abstract4x4Vehicle(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
: AbstractVehicle(engine), wheelFL{wFL}, wheelFR{wFR}, wheelBL{wBL}, wheelBR{wBR}
{

}

void Abstract4x4Vehicle::outputComposition() {
	cout << "== 4x4 Vehicle Composition ==" << endl;
	this->engine.outputComponent();
	this->wheelFL.outputComponent();
	this->wheelFR.outputComponent();
	this->wheelBL.outputComponent();
	this->wheelBR.outputComponent();
	cout << "== End Composition ==" << endl;
}

void Abstract4x4Vehicle::start() {
	this->engine.start();
};

void Abstract4x4Vehicle::stop() {
	this->engine.stop();
};

// == Car == //
Car::Car(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
: Abstract4x4Vehicle(engine, wFL, wFR, wBL, wBR) {

}

void Car::outputComposition() {
	base_type::outputComposition();
}

void Car::start() {
	cout << "Car Starting" << endl;
	base_type::start();
};

void Car::stop() {
	cout << "Car Stopping" << endl;
	base_type::stop();
};

// == Truck == //
Truck::Truck(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
: Abstract4x4Vehicle(engine, wFL, wFR, wBL, wBR) {

}

void Truck::outputComposition() {
	base_type::outputComposition();
}

void Truck::start() {
	cout << "Truck Starting" << endl;
	base_type::start();
};

void Truck::stop() {
	cout << "Truck Stopping" << endl;
	base_type::stop();
};

// == END == //
