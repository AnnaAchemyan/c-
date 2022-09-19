#include <iostream>

void home() {
    
	for(int i = 0; i < 6; ++i) {
		
		for(int j = 6; j >= i; --j) {
           std::cout << " ";
		}

        for(int k = 0; k <= i; ++k) {
           std::cout << "* ";
		}
		if(i == 5) {
			std::cout << std::endl;
			for(int m = 0; m < 6; ++m) {
				std::cout << "  ";
				for(int n = 0; n < 6; ++n) {

           			std::cout << "* ";
				
				}
				
				std::cout << std::endl;
			}
    	}
		std::cout << std::endl;
	 

	}
}


void triangle() {

	for(int i = 0; i < 6; ++i) {
		for(int j = 0; j <=i; j++) {
			std::cout << "* " ;
		}
		std::cout << std::endl;

	}
}


int main() {

//	home();
	triangle();

}
