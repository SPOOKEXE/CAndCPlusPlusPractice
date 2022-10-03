
#include "example_1.h"
#include <iostream>

using namespace N;
using namespace std;

void example_class::do_something() {
	cout << "Doing something!" << endl;
}

int main() {
	example_class example = example_class();
	example.do_something();
	return 0;
}

