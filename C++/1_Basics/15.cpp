#include <iostream>

int main() {

	using namespace std;

	// using {} is recognized as the "empty brace initializer"

	int number1 {}; // uses default value of 0
	int number2; // as before, gives random garbage

	// errors because 1.2 is not an integer
	// int number3 = {1.2};

	return 0;

}

