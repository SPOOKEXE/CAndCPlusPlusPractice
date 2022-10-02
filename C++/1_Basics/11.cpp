
#include <iostream>

int main() {
	using namespace std;

	// convert fahrenheit to celsius
	cout << "Fahrenheit: ";
	int fahrenheiht;
	cin >> fahrenheiht;
	
	double celsius = (fahrenheiht - 32) / 1.8;
	cout << "Celsius: " << celsius;

	return 0;
}
