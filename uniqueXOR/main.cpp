#include <iostream>
using namespace std;

void uniqueXOR(int *ptr, int length) {
	int count = 0;
	for(int i = 0; i < length; ++i) {
		for(int j = 0; j < length; ++j) {
			if(i != j){
				if((ptr[i] ^ ptr[j]) == 0) {
					count++;
					break;
				} 
				if((ptr[i] ^ ptr[j]) != 0 && j == length - 1) {
					cout << ptr[i] << endl;
  			 }
					
			}
		}
	}
	if(count == length) {
		cout << -1 << endl;
	}
}

int main() {
	const int length = 5;
	int arr[length] = {1, 1, 4, 1, 1};
	uniqueXOR(arr, length);

}
