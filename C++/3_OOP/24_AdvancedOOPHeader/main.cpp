#include <iostream>
#include "vehicle.h"

using namespace std;
using namespace VehicleComposition;

int main() {
	Engine testEngine = Engine("ENGINE_SERIAL_123", "V8 Engine");
	testEngine.outputComponent();
	cout << '\n';

	Wheel testWheel = Wheel("WHEEL_SERIAL_321", "HIGH_GRIP_ASPHALT", 50);
	testWheel.outputComponent();
	cout << '\n';

	AbstractVehicle abstractVehicle = AbstractVehicle(testEngine);
	abstractVehicle.outputComposition();
	abstractVehicle.start();
	abstractVehicle.stop();
	cout << '\n';

	Abstract4x4Vehicle abstract4x4 = Abstract4x4Vehicle(testEngine, testWheel, testWheel, testWheel, testWheel);
	abstract4x4.outputComposition();
	abstract4x4.start();
	abstract4x4.stop();
	cout << '\n';

	Car carVehicle = Car(testEngine, testWheel, testWheel, testWheel, testWheel);
	carVehicle.outputComposition();
	carVehicle.start();
	carVehicle.stop();
	cout << '\n';

	Truck truckVehicle = Truck(testEngine, testWheel, testWheel, testWheel, testWheel);
	truckVehicle.outputComposition();
	truckVehicle.start();
	truckVehicle.stop();
	cout << '\n';

	return 0;
}
