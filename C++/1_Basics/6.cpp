#include <iostream>

int main() {
	// put this under the scope instead of the entire file
	using namespace std;

	int x = 10;
	cout << x; // x is 10
	int y = x++; // sets y to x, then adds 1 to x
	cout << x; // x is 11
	cout << y; // y is 10

	y = ++x; // sets y to x + 1, as well as adds 1 to x
	cout << x; // x is 12
	cout << y; // y is 12

	return 0;
}
