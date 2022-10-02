#include <iostream>
#include <cmath>

int main() {
	using namespace std;

	const double pi = 3.14;

	cout << "Enter radius: ";
	double radius;
	cin >> radius;
	
	double area = pi * pow(radius, 2);
	cout << "Area: " << area;

	return 0;
}

