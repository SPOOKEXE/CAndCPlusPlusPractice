#include <iostream>

int main() {
	using namespace std;

	int x = 10;
	int y = 3;

	// endl represents "end line" (\n)

	// ADDITION
	cout << endl << "ADDITION" << endl;

	// "x" & "y" are named "operads"
	// "x + y" is an expression
	cout << x + y;

	// DIVISION
	// You cannot divide two integers and get a float/double,
	// one of them has to be a float/double.

	{ // put this in a new scope so its separated
		int div_int = x / y; // gives an integer
		double div_double = x / y; // still an integer
		float div_float = x / y; // still an integer
		cout << endl << "INTEGER DIVISION" << endl;
		cout << div_int << endl << div_double << endl << div_float;
	}

	{ // now lets make them doubles/floats
		double x2 = x;
		int div_int = x2 / y; // gives an integer
		double div_double = x2 / y; // double
		float div_float = x2 / y; // float
		cout << "DOUBLE DIVISION" << endl;
		cout << div_int << endl  << div_double << endl << div_float;
	}
	
	// SUBTRACT
	cout << endl << "SUBTRACTION" << endl;
	cout << x - y << endl << y - x;

	// MULTIPLY
	cout << endl << "MULTIPLICATION" << endl;
	cout << x * y;

	return 0;
}
