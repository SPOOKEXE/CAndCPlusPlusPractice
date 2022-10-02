#include <iostream>

int main() {
	using namespace std;

	/*
	==BODMAS==
		Brackets
		Operators
		Division
		Multiplication
		Addition
		Subtraction
	*/

	double x = 1 + 2 * 3;
	cout << "\n";
	cout << x;

	// implement "z equals x plus 10 divided by three times y"
	int y = 5;
	double z = (x + 10) / (3 * y);
	cout << "\n";
	cout << z;

	return 0;
}
