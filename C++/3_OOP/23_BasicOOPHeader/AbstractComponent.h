#ifndef ABSTRACTCOMPONENT_H
	#define ABSTRACTCOMPONENT_H

	#include <iostream>
	#include <string>

	using namespace std;

	class AbstractComponent {
		protected:
			string Serial;
			string Type;
		public:
			AbstractComponent(string serial, string type);
			string getSerial() const;
			string getType() const;
			void setSerial(string serial);
			void setType(string type);
			void outputComponent();
	};

#endif // ABSTRACTCOMPONENT_H