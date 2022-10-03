#include <iostream>

using namespace std;

class AbstractComponent {
	protected:
		string Serial;
		string Type;
	public:
		AbstractComponent(string serial, string type) {
			this->Serial = serial;
			this->Type = type;
		}

		string getSerial() {
			return this->Serial;
		}

		string getType() {
			return this->Type;
		}

		void setSerial(string serial) {
			this->Serial = serial;
		}

		void setType(string type) {
			this->Type = type;
		}

		virtual void outputComponent() {
			cout << "Component Info | " << this->Serial << " | " << this->Type << endl;
		}
};

class Engine : public AbstractComponent {
	protected:
		bool engineRunning;
		using base_type = AbstractComponent;
	public:
		Engine(string serial, string type) : AbstractComponent(serial, type) {
			this->engineRunning = false;
		}

		void start() {
			cout << "Engine Started!" << endl;
			this->engineRunning = true;
		}

		void stop() {
			cout << "Engine Stopped!" << endl;
			this->engineRunning = false;
		}

		bool isRunning() {
			return this->engineRunning;
		}

		virtual void outputComponent() override {
			cout << "Engine Info | " << this->Serial << " | " << this->Type << " | Engine " << (isRunning() ? "Running" : "Stopped") << endl;
		}
};

class Wheel : public AbstractComponent {
	protected:
		double GripFactor;
		using base_type = AbstractComponent;
	public:
		Wheel(string serial, string type, double gripFactor) : AbstractComponent(serial, type) {
			this->GripFactor = gripFactor;
		}

		float getGripFactor() {
			return this->GripFactor;
		}

		virtual void outputComponent() override {
			cout << "Wheel Info | " << this->Serial << " | " << this->Type << " | Grip Factor " << getGripFactor() << endl;
		}
};

class AbstractVehicle {
	protected:
		Engine engine;
	public:
		AbstractVehicle(Engine engine) : engine{engine} {
			
		}

		void setEngine(Engine newEngine) {
			this->engine = newEngine;
		}

		Engine getEngine() {
			return this->engine;
		}

		virtual void start() {
			cout << "Abstract Vehicle Starting" << endl;
			this->engine.start();
		}

		virtual void stop() {
			cout << "Abstract Vehicle Stopping" << endl;
			this->engine.stop();
		}

		virtual void outputComposition() {
			cout << "== Vehicle Composition ==" << endl;
			this->engine.outputComponent();
			cout << "== End Composition ==" << endl;
		}
};

class Abstract4x4Vehicle : public AbstractVehicle {
	protected:
		Wheel wheelFL; // front-left
		Wheel wheelFR; // front-right
		Wheel wheelBL; // back-left
		Wheel wheelBR; // back-right
		using base_type = AbstractVehicle;
	public:
		Abstract4x4Vehicle(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
		: AbstractVehicle(engine), wheelFL{wFL}, wheelFR{wFR}, wheelBL{wBL}, wheelBR{wBR}
		{

		}

		virtual void outputComposition() override {
			cout << "== 4x4 Vehicle Composition ==" << endl;
			this->engine.outputComponent();
			this->wheelFL.outputComponent();
			this->wheelFR.outputComponent();
			this->wheelBL.outputComponent();
			this->wheelBR.outputComponent();
			cout << "== End Composition ==" << endl;
		}

		virtual void start() override {
			this->engine.start();
		};
		
		virtual void stop() override {
			this->engine.stop();
		};
};

class Car : public Abstract4x4Vehicle {
	protected:
		using base_type = Abstract4x4Vehicle;
	public:
		Car(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
		: Abstract4x4Vehicle(engine, wFL, wFR, wBL, wBR) {

		}

		virtual void outputComposition() {
			base_type::outputComposition();
		}

		virtual void start() override {
			cout << "Car Starting" << endl;
			base_type::start();
		};
		
		virtual void stop() override {
			cout << "Car Stopping" << endl;
			base_type::stop();
		};
};

class Truck : public Abstract4x4Vehicle {
	protected:
		using base_type = Abstract4x4Vehicle;
	public:
		Truck(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR)
		: Abstract4x4Vehicle(engine, wFL, wFR, wBL, wBR) {

		}

		virtual void outputComposition() override {
			base_type::outputComposition();
		}

		virtual void start() override {
			cout << "Truck Starting" << endl;
			base_type::start();
		};
		
		virtual void stop() override {
			cout << "Truck Stopping" << endl;
			base_type::stop();
		};
};

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
