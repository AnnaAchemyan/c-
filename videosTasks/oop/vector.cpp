#include <iostream>

class Vector {

	public:
		Vector() { }
		~Vector() { }

		int* push_back(int elem) {

			if(size == capacity) {
				capacity *= 2; 
				int *temp = new int[capacity];
				
				for(int i = 0; i < size; ++i) {
					temp[i] = arr[i];
				}
				
				delete[] arr;
				arr = temp;

			}
			arr[size] = elem;
			++size;
			
			return arr;
		
		}

		int* push_front(int elem) {

			if(size == capacity) {
				capacity *= 2;
				int *temp = new int[capacity];
				for(int i = 0; i < size; ++i) {
					temp[i] = arr[i];
				}
				delete[] arr;
				arr = temp;
			}

			for(int i = size - 1; i >= 0; --i) {
				arr[i + 1] = arr[i];
			}
			arr[0] = elem;
			++size;
			return arr;
		}
	private:
		int capacity;
		int size;
		int *arr;
};

int main() {
	
	Vector v;

	int *arr;
	arr = v.push_back(5);
	arr = v.push_back(7);
	arr = v.push_front(1);
	arr = v.push_front(2);
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	std::cout << arr[3] << std::endl;

}
