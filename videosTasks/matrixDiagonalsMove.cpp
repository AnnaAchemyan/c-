#include <iostream>

void matrixDiagonalsMove() {

	int size = 5, counter1 = 0, counter2 = 0;	
	int matrix[size][size];
	int arr1[size], arr2[size];

	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			matrix[i][j] = rand() % 10;
			std::cout << matrix[i][j] << " " ;
		}
		std::cout << std::endl;

	}
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i == j) {
				arr1[counter1] = matrix[i][j];
				++counter1;
			}
		}

	}
	counter1 = 0;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i + j == size - 1) {
				arr2[counter1] = matrix[i][j];
				++counter1;
			}
		}

	}
	std::cout << std::endl;
	std::cout << "changed matrix: " << std::endl;
	std::cout << std::endl;
	counter1 = 0;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i == j) {
				matrix[i][j] = arr2[counter1];
				++counter1;
			}
			if(i + j == size - 1) {
				matrix[i][j] = arr1[counter2];
				++counter2;
			}
			std::cout << matrix[i][j] << " " ;
		}
		std::cout << std::endl;

	}

}


int main() {
	matrixDiagonalsMove();

}
