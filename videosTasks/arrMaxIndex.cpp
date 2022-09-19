#include <iostream>

void arrMaxIndex() {
	int size = 5;
	int max, index;
	int arr[size];
	std::cout << "Enter array elements:  " << std::endl;
	for(int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	max = arr[0];
	for(int i = 0; i < size; ++i) {
		if(arr[i] > max) {
			max = arr[i];
			index = i;
		}
	
	}
	std::cout << "max = " << max << std::endl;
	std::cout << "max value index is  " << index << std::endl;
}



int main() {

	arrMaxIndex();

}
