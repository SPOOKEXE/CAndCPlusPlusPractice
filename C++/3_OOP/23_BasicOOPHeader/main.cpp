// Separating a C++ class into a .h and .cpp files
// https://www.youtube.com/watch?v=gyA7uDlazkc

#include "AbstractComponent.h"
#include <iostream>

using namespace AbstractComponent;
using namespace std;

int main() {
	AbstractComponent component = AbstractComponent("V8 Engine", "Engine");
	component.outputComponent();

	return 0;
}
