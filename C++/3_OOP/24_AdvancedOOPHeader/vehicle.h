
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

	// class Engine : public AbstractComponent {
	// 	protected:
	// 		bool engineRunning;
	// 		using base_type = AbstractComponent;
	// 	public:
	// 		void start();
	// 		void stop();
	// 		bool isRunning();
	// 		virtual void outputComponent() override;
	// };

	// class Wheel : public AbstractComponent {
	// 	protected:
	// 		double GripFactor;
	// 		using base_type = AbstractComponent;
	// 	public:
	// 		float getGripFactor();
	// 		virtual void outputComponent();
	// };

	// class AbstractVehicle {
	// 	protected:
	// 		Engine engine;
	// 	public:
	// 		void setEngine(Engine newEngine);
	// 		Engine getEngine();
	// 		virtual void start();
	// 		virtual void stop();
	// 		virtual void outputComposition();
	// };

	// class Abstract4x4Vehicle : public AbstractVehicle {
	// 	protected:
	// 		Wheel wheelFL; // front-left
	// 		Wheel wheelFR; // front-right
	// 		Wheel wheelBL; // back-left
	// 		Wheel wheelBR; // back-right
	// 		using base_type = AbstractVehicle;
	// 	public:
	// 		virtual void outputComposition();
	// 		virtual void start();
	// 		virtual void stop();
	// };

	// class Car : public Abstract4x4Vehicle {
	// 	protected:
	// 		using base_type = Abstract4x4Vehicle;
	// 	public:
	// 		virtual void outputComposition();
	// 		virtual void start();
	// 		virtual void stop();
	// };

	// class Truck : public Abstract4x4Vehicle {
	// 	protected:
	// 		using base_type = Abstract4x4Vehicle;
	// 	public:
	// 		virtual void outputComposition();
	// 		virtual void start();
	// 		virtual void stop();
	// };

};

