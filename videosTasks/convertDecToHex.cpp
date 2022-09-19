#include <iostream>
#include <string>

void convertDecToHex() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	std::string res = "", reversedRes = "";
	int leftover, charHex;
	while(num >= 1) {
		leftover = num % 16;
		num = num / 16;
		if(num >= 10 && num < 16) {
			charHex = num;
		}
		if(leftover >= 10 && leftover < 16) {
		    charHex = leftover;
		}
		if((num >= 10 && num < 16) || (leftover >= 10 && leftover < 16)) {

			switch(charHex) {
				case 10 :
					res += 'A';
					break;	
				case 11 :
					res += 'B';
					break;
				case 12 :
					res += 'C';
					break;
				case 13 :
					res += 'D';
					break;
				case 14 :
					res += 'E';
					break;
				case 15 :
					res += 'F';
					break;
			}

		} else {
			res += std::to_string(leftover); 
		}

		if(num < 10) {
			res += std::to_string(num); 
			break;
		}

	}

	for(int i = res.length(); i >= 0; --i) {
	    reversedRes += res[i];
	}

	std::cout <<"Hex number:  " << reversedRes << std::endl;
}


int main() {

	convertDecToHex();

}
