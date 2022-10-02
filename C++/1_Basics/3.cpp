#include <iostream>

int main() {

	// Declare & Initialize individually
	int file_size;
	std::cout << file_size; // outputs garbage
	file_size = 100;

	// Declare & Initialize in one line
	double sales = 9.99;

	// output these
	std::cout << file_size;
	std::cout << sales;

	return 0;
}
