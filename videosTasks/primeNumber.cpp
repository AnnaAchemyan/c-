#include <iostream>

void primeNumber(int num) {
	bool result = true;
	for(int i = 2; i < num/2; ++i) {
		if(num % i == 0) {

			result = false;
			break;
		}
	}
	std::cout << result << std::endl;
	
}

int main() {

	primeNumber(5);
}
