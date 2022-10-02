#include <iostream>

int main() {

	using namespace std;

	// You can input the two numbers separately, otherwise
	// if you add a space inbetween the two numbers, 
	// you can submit both numbers at the same time.
	// "10" and "5"
	// "10 5"

	cout << "Enter values for x and y: ";
	int x;
	int y;
	// cin >> x;
	// cin >> y;
	cin >> x >> y; // chaining cins.
	cout << x + y; // output the addition of the two numbers

	return 0;
}
