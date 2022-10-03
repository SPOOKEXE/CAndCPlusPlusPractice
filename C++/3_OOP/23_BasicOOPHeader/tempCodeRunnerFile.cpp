#include "AbstractComponent.h"
#include <iostream>

using namespace test;
using namespace std;

int main() {
	AbstractComponent component = AbstractComponent("V8 Engine", "Engine");
	component.outputComponent();

	return 0;
}
