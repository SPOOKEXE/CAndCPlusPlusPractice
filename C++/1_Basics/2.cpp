#include <iostream>

int main() {
	// bring the namespace into the scope
	// don't use in global scope, bad practice and can mix libraries up
	using namespace std;

	cout << "Epic!";

	return 0;
}