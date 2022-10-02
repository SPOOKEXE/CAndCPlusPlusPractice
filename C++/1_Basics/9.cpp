#include <iostream>

int main() {

	using namespace std;

	// "cin" is the "standard input stream"
	// ">>" is a stream extraction operator

	cout << "Enter a value: ";
	
	// set the int value's value to the input value
	int value;
	cin >> value; // any decimals will change to integers, any strings results in 0.
	cout << value;

	return 0;
}
