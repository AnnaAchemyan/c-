#include <iostream>
#include <string>

void convertDecToBin() {
int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::string res = "", reversedRes = "";
	int leftover;

	while(num >= 1) {
	    leftover = num % 2;
    	num = num / 2;
    	res += std::to_string(leftover);
	}

    for(int i = res.length(); i >= 0; --i) {
       reversedRes += res[i];
    }

    std::cout << "Bin number:  " << reversedRes << std::endl;


}

int main() {
    convertDecToBin();
}