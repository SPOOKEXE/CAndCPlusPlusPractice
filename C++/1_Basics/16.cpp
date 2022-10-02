#include <iostream>

using namespace std;

namespace namespace1  {
	int age = 25;
}

namespace namespace2  {
	int age = 26;
}

int main() {
	cout << namespace1::age << endl;
	cout << namespace2::age << endl;

	return 0;
}
