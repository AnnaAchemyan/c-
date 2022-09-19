#include <iostream>

void matrixDiagonalsSum() {

	int size = 5, sum1 = 0, sum2 = 0;	
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
				sum1 += matrix[i][j];
			}
		}

	}

	std::cout << std::endl;
	std::cout << "main diagonal elements sum : " << sum1 << std::endl ;
	std::cout << "secondary diagonal : " ;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			if(i + j == size - 1) {
				std::cout << matrix[i][j] << " ";
				sum2 += matrix[i][j];
			}
		}

	}
	std::cout << std::endl;
	std::cout << "secondary diagonal elements sum : " << sum2 << std::endl ;
	std::cout << "sum1 + sum2 : " << sum1 + sum2 << std::endl;

}



int main() {
	matrixDiagonalsSum();
}
