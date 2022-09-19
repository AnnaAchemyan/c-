#include <iostream>

void calc() {
	int num1, num2 ;
	char ch;
	std::cout << "Enter two numbers " ;
	std::cin >> num1 ;
	std::cin >> num2 ;
	std::cout << "Choose arithmetic symbol + , - , * , / " << std::endl ;
	std::cin >> ch;

	switch(ch) {

		case '+' :
			std::cout << "sum " << num1 + num2 << std::endl;
			break;
		case '-' :
			std::cout << "sub " << num1 - num2 << std::endl;
			break;
		case '*' :
			std::cout << "mul " << num1 * num2 << std::endl;
			break;
		case '/' :
			std::cout << "div " << num1 / num2 << std::endl;
			break;
		default:
			std::cout << "Somthing was wrong ( " << std::endl;

	}
}



int main() {
	calc();

}
