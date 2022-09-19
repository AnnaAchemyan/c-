#include <iostream>

class Person {

	private:
		int age;
		std::string name;

	public:
		void set_age(int age) {
			this->age = age;
		}
		int get_age() {

			return this->age;
		}

		void set_name(std::string name) {
			this->name = name;
		}
		std::string get_name() {

			return this->name;
		}

	
};


int main() {
	int age;
	std::string name;

	Person p;

	p.set_age(17);
	age = p.get_age();
	p.set_name("Ani");
	name = p.get_name();
	std::cout << name << std::endl;
	std::cout << age << std::endl;


}
