#include <iostream>
#include <string>
#include <cstring>

void inputName() {
	std::string name;
	std::cout << "Enter your name : " ;
	std::cin >> name;
	for(int i = 0; i < 5; ++i) {
		if(islower(name[i])) {
			name[i] = toupper(name[i]);
		}
	}
	std::cout << name << std::endl;
}

void reverseStr(char* str) { 
	std::string result = "";
	for(int i = strlen(str); i >=  0; --i) {
		result += str[i];
	}
	std::cout << result; 
}

void threeVars() {
	int num1, num2, num3;
	std::cout << "Enter three numbers " << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	bool b;
	if(num1 == num2 && num1 == num3) {
		b = true;
	} else {
		b = false;	
		std::cout << num3 << std::endl;  
		std::cout << num2 << std::endl;  
		std::cout << num1 << std::endl;  
	}
}

int main() {
	char str[] = "barev";
//	inputName();
//	reverseStr(str);
//	threeVars();


}
