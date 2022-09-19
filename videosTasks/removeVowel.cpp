#include <iostream>
#include <string>

void removeVowel() {
	std::string name = "";
	std::cout << "Enter your name:  ";
	std::cin >> name;
	int len = name.length();
	std::string newName = "";
	for(int i = 0; i < len; ++i) {
		if(name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u' ) {
			newName += name[i];

		}

	}
	std::cout << "Your name without vowels : " <<  newName << std::endl;

}

int main() {

	removeVowel();

}
