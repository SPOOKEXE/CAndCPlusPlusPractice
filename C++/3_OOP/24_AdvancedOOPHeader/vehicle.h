
using namespace std;

namespace VehicleComposition {

	class AbstractComponent {
		protected:
			string Serial;
			string Type;
		public:
			AbstractComponent(string serial, string type);
			string getSerial();
			string getType();
			void setSerial(string serial);
			void setType(string type);
			virtual void outputComponent();
	};

	class Engine : public AbstractComponent {
		protected:
			bool engineRunning;
			using base_type = AbstractComponent;
		public:
			Engine(string serial, string type);
			void start();
			void stop();
			bool isRunning();
			virtual void outputComponent() override;
	};

	class Wheel : public AbstractComponent {
		protected:
			float GripFactor;
			using base_type = AbstractComponent;
		public:
			Wheel(string serial, string type, float gripFactor);
			float getGripFactor();
			virtual void outputComponent();
	};

	class AbstractVehicle {
		protected:
			Engine engine;
		public:
			AbstractVehicle(Engine engine);
			void setEngine(Engine newEngine);
			Engine getEngine();
			virtual void start();
			virtual void stop();
			virtual void outputComposition();
	};

	class Abstract4x4Vehicle : public AbstractVehicle {
		protected:
			Wheel wheelFL; // front-left
			Wheel wheelFR; // front-right
			Wheel wheelBL; // back-left
			Wheel wheelBR; // back-right
			using base_type = AbstractVehicle;
		public:
			Abstract4x4Vehicle(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR);
			virtual void outputComposition();
			virtual void start();
			virtual void stop();
	};

	class Car : public Abstract4x4Vehicle {
		protected:
			using base_type = Abstract4x4Vehicle;
		public:
			Car(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR);
			virtual void outputComposition();
			virtual void start();
			virtual void stop();
	};

	class Truck : public Abstract4x4Vehicle {
		protected:
			using base_type = Abstract4x4Vehicle;
		public:
			Truck(Engine engine, Wheel wFL, Wheel wFR, Wheel wBL, Wheel wBR);
			virtual void outputComposition();
			virtual void start();
			virtual void stop();
	};

};

