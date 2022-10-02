#include <iostream>

int main() {
	using namespace std;

	// unsigned numbers cannot accept negative values
	unsigned int number1 = -255;
	cout << number1 << endl;

	unsigned int number2 = 0;
	number2--;
	cout << number2 << endl;

	// signed numbers can accept negative values
	signed int number3 = 255;
	cout << number3 << endl;

	signed int number4 = 0;
	number4--;
	cout << number4 << endl;

	return 0;
}
