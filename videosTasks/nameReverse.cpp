#include <iostream>
#include <string>
#include <cstring>

void nameReverse() {
	
	std::string name;
	std::cout << "Enter your name ";
	std::cin >> name;
	int len = name.length();
	std::string result = ""; 
	for(int i = len; i >= 0; --i) {
		result += name[i];
	}	
	std::cout << result << std::endl;
}

int main() {

	nameReverse();	
}
