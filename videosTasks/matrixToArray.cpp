#include <iostream>

void matrixToArray(int **matrix, int size) {

	int arr[size * size], count = 0;
	for(int i = 0; i < size; ++i) {
		for(int j = 0; j < size; ++j) {
			arr[count] = matrix[i][j];
			std::cout << arr[count] << " " ;
		}
	}
}


int main() {
	int size = 5;
	int **matrix = new int*[size];
	for(int i = 0; i < size; ++i) {
			matrix[i] = new int[size];
		for(int j = 0; j < size; ++j) {
			matrix[i][j] = rand() % 10;
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	matrixToArray(matrix, size);
	
	std::cout << std::endl;
	
}
