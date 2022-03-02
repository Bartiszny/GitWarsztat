#include <iostream>

int main() {

	for (short i{0}; i < 10; ++i) {
		if (i%2)
			std::cout << "Hello Friend!" << std::endl;
		else
			std::cout << "Hello Git!" << std::endl;

	}
	return 0;
}
