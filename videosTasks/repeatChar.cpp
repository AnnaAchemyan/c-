#include <iostream>
#include <string>
#include <vector>
void repeatChar() {
	int count = 0;
	std::cout << "Enter a text line : ";
	std::string line =  "";
    getline(std::cin, line);
	int len = line.length();
	int arr[len];
	for(int i = 0; i < len; ++i) {
		for(int j = 0; j < len; ++j) {
			if(line[i] == line[j]) {
				++count;
			}

		}
		arr[i] = count;
		count = 0;
	}
	int max = arr[0], index;
	for(int k = 0; k < len; ++k) {
		if(arr[k] > max) {

			max = arr[k];
			index = k;
		}
	}	
	std::cout << "The most repeated symbol : " << line[index] << std::endl;
}

void repeatCharSection() {
	std::vector<std::string> strVector;
	int i = 0, j;
	std::cout << "Enter a text line : ";
	std::string line =  "",  ch = "", max;
    getline(std::cin, line);
	int len = line.length();
	
	while(line[i] != '\0') {
		j = i + 1;
		
	 	ch = line[i];
		while(line[j] == line[i]) {
			ch += line[j];
			++j;			
		}
		if(ch.length() > 1) {
			strVector.push_back(ch);
		}
		ch = "";
		i = j;
	}

	max = strVector[0];
	for(int k = 0; k < strVector.size(); ++k) {
		if(strVector[k].length() > max.length()) {
			max = strVector[k];
		}
	//	std::cout << strVector[k] << " "; 

	}
	std::cout << std::endl;
	std::cout << "The most repeated symbol section:  " << max << std::endl;
}

int main() {

//	repeatChar();
	repeatCharSection();
}
