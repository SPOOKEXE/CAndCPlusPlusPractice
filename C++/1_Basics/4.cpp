#include <iostream>

int main() {

	// exercise : swap the value of two
	// variables without setting the values directly

	int value1 = 1;
	int value2 = 2;
	std::cout << value1;
	std::cout << value2;

	// swap the values using a third variable
	int temp = value1;
	value1 = value2;
	value2 = temp;
	std::cout << value1;
	std::cout << value2;

	return 0;
}
