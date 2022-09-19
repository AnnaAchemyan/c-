#include <iostream>

struct Student {

	std::string name;
	std::string sName;
	int age;
	std::string subjects[3];

};

int main() {
	std::string sub[3] = {"Math", "Algebra", "Geometria"};

	Student s[3];
	s[0].name = "Mary";
	s[0].sName = "Simonyan";
	s[0].age = 10;
	s[1].name = "Ani";
	s[1].sName = "Simonyan";
	s[1].age = 20;
	s[2].name = s[0].name;
	s[2].sName = s[1].sName;
	s[2].age = (s[0].age + s[1].age) / 2;
	for(int i = 0; i < 3; ++i) {	
		for(int k = 0; k < 3; ++k) {
			s[k].subjects[i] = sub[i];
		}
	}
	int max = s[0].age;
	std::string n;
	for(int j = 1; j < 2; ++j) {
		if(s[j].age > max) {
			max = s[j].age;
			n = s[j].name;
		}
			
	}
	std::cout << "Older person : " << n << std::endl;

	for(int n = 0; n < 3; ++n) {
		std::cout << s[n].name << std::endl;
		std::cout << s[n].sName << std::endl;
		std::cout << s[n].age << std::endl;
	}
}
