
#include <iostream>

int main() {

	double price = 99.99;
	float interestRate = 3.67f; // f or F is float, otherwise the number is considered a double

	long fileSize = 90000L; // L is long, otherwise treated as integer
	char letter = 'a'; // single quotes = character
	bool isValid = true; // boolean, true/false only

	auto determined = 5.555555; // auto will automatically determine the variable type
	auto notLongNum = 50000000; // treated as an integer
	auto LongNum = 50000000L; // treated as a long

	return 0;
}
