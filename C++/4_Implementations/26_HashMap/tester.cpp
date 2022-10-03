#include <iostream>
#include <string>
#include <assert.h>
#include "HashMap.h"

using namespace std;

struct MyKeyHash {
	unsigned long operator()(const int& k) const {
		return k % 10;
	}
};

void simple_test() {
	HashMap<int, string, 10, MyKeyHash> map;
	map.put(1, "1");
	map.put(2, "2");
	map.put(3, "3");

	string value;
	bool result = map.get(2, value);
	assert(result);
	assert(value == "2");

	result = map.get(3, value);
	assert(result);
	assert(value == "3");

	map.remove(3);
	result = map.get(3, value);
	assert(!result);

	cout << "Success!";
}

int main() {
	simple_test();
	return 0;
}