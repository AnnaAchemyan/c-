#include <iostream>
#include <string>

void toUppercase() {
	std::cout << "Enter a text line : ";
	std::string line =  "";
    getline(std::cin, line);

	int len = line.size();
	for(int i = 0; i < len; ++i) {

		if(islower(line[i])) {
				
			line[i] = toupper(line[i]);
		}
	}

	std::cout << line << std::endl;

 }

void toUpperSecondSym() {

	std::cout << "Enter a text line : ";
	std::string line =  "";
    getline(std::cin, line);

	int len = line.size();
	for(int i = 0; i < len; i = i + 2) {

		if(islower(line[i])) {
				
			line[i] = toupper(line[i]);
		}
	}

	std::cout << line << std::endl;


}

int main() {

//	toUppercase();
	toUpperSecondSym();
}
