#pragma once

#include <iostream>
#include <string>

using namespace std;

namespace test {

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
			void outputComponent();
	};

}