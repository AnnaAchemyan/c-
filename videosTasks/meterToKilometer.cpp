#include <iostream>

void meterToKilometer() {
	float meter;
	std::cout << "Enter the meter for convert kilometer:  ";
	std::cin >> meter;

	std::cout << meter << " meter = " << meter / 1000 << " kilometer  " << std::endl;

}



int main() {
	meterToKilometer();


}
