#include <iostream>

void matrixDiagonals() {
	int size = 5;	
	int matrix[size][size];
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			matrix[i][j] = rand() % 10;
			std::cout << matrix[i][j] << " " ;
		}
		std::cout << std::endl;

	}
	std::cout << std::endl;
	std::cout << "main diagonal : " ;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i == j) {
				std::cout << matrix[i][j] << " ";
			}
		}

	}

	std::cout << std::endl;
	std::cout << "secondary diagonal : " ;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i + j == size - 1) {
				std::cout << matrix[i][j] << " ";
			}
		}

	}
	std::cout << std::endl;
}

int main() {


	matrixDiagonals();	
}
