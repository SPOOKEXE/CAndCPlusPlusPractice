
#include <iostream>

// https://projecteuler.net/problem=2

int main() {

	int even_fibbonaci_sum = 0;

	int previous = 1;
	int current = 2;

	while (current < 4e6) {
		if (current % 2 == 0) {
			even_fibbonaci_sum += current;
		}

		int temp = current;
		current += previous;

		previous = temp;
	}

	std::cout << even_fibbonaci_sum << std::endl;

	return 0;
}
