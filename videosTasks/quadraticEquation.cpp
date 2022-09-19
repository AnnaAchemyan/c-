#include <iostream>
#include <math.h> 

void quadraticEquation() {
	int a, b, c;
	float D, x, x1, x2;
	std::string equat = "";
	
	std:: cout << "Please enter numbers for quadratic equation ax^2 + bx + c = 0 " << std::endl;
	std::cout << "a = " ;
	std::cin >> a;
	std::cout << "b = " ;
	std::cin >> b;
	std::cout << "c = " ;
	std::cin >> c;
	
	D = pow(b, 2) - 4 * a * c;
	std::cout << "D = " << D << std::endl;
	if(D < 0) {
		std::cout << "The equation has no solution ( " << std::endl;
	}
	if(D == 0) {
		x = (-1 * b) / (2 * a);
		std::cout << " x = " << x << std::endl; 
	}
	if(D > 0) {
		x1 = ((-1 * b) + sqrt(D)) / (2 * a);
		x2 = ((-1 * b) - sqrt(D)) / (2 * a);

		std::cout << " x1 = " << x1 << std::endl; 
		std::cout << " x2 = " << x2 << std::endl; 
	}

}

int main() {

	quadraticEquation();

}
