#include <iostream>

void divideNumsMaxMin() {
	int num;
	std::cout << "Enter a number : " ;
	std::cin >> num;
	int max = num % 10, min = max;
	int res;
	while(num > 0) {
		//std::cout << num % 10 << std::endl;

		res = num % 10;
		if(res > max) {
			max = res;
		}
		if(res < min) {
			min = res;
		}
		num = num / 10;
	}
	std::cout << "max : " << max << std::endl;
	std::cout << "min : " << min << std::endl;
}

int main() {

	divideNumsMaxMin();

}
