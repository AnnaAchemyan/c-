#include <iostream>
#include <string>
#include <cmath>

void divideNums() {
	int  num;
	std::cout << "Enter a number : " ;
	std::cin >> num;
	int len = std::to_string(num).length();
	for(int i = len - 1; i > 0; --i) {
		std::cout << num /(int)pow(10 , i) % 10 << std::endl;
	}
	std::cout << num%10 <<std::endl;	
}

void divideNumsReverse() {

	int num;
	std::cout << "Enter a number" << std::endl;
	std::cin >> num;

	int len = std::to_string(num).length();
	for(int i = 0; i < len; ++i) {
		std::cout << num / (int)pow(10 , i) % 10 << std::endl;
	}

}


void divideNumsSum() {
	int num, sum = 0;
	std::cout << "Enter a number";
	std::cin >> num;
	int len = std::to_string(num).length();
	for(int i = 0; i < len; ++i) {
		sum += num / (int)pow( 10, i ) % 10;
	}
	std::cout << "sum = " << sum << std::endl;
}

void divideNumsMul() {
	int num, mul = 1;
	std::cout << "Enter a number";
	std::cin >> num;
	int len = std::to_string(num).length();
	for(int i = 0; i < len; ++i) {
		mul *= num / (int)pow( 10, i ) % 10;
	}
	std::cout << "mul = " << mul << std::endl;
}


int main() {
//	divideNums();
//	divideNumsReverse();
//	divideNumsSum();
	divideNumsMul();


}
