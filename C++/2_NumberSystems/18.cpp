#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	using namespace std;

	// will always give the same number without a seed
	int number = rand();
	cout << number << endl;
	cout << number << endl;

	// different than before, but still not random after the first one
	srand(5);
	number = rand();
	cout << number << endl;
	cout << number << endl;
	
	// using time we can get random numbers everytime (although it rounds to a second)
	srand(time(nullptr));
	cout << rand() % 10 << endl;

	return 0;
}
