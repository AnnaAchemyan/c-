#include <iostream>

class Student {

	public:
		std::string name;
		std::string sName;
		int age;

};

int main() {

	Student s1, s2;

	s1.name = "Ani";
	s1.sName = "Karapetyan";
	s1.age = 17;
	s2.name = "Nare";
	s2.sName = "Karapetyan";
	s2.age = 19;

	std::string older = "";

	older = s1.name;
	if(s2.age > s1.age) {

		older = s2.name;
	}	

	std::cout << "older "<< older << std::endl;
}
