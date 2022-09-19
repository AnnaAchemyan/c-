#include <iostream>
using namespace std;

void isUnique(int *ptr, int length) {
	int count = 0;
	for(int i = 0; i < length; ++i) {
		for(int j = 0; j < length; ++j) {
			if(i != j){
				if(ptr[i] == ptr[j]) {
					count++;
					break;
				} 
				if(ptr[i] != ptr[j] && j == length - 1) {
					cout << ptr[i] << endl;
  			 }
					
			}
		}
	}
	if(count == length) {
		cout << -1 << endl;
	}

int main() {
	int arr[] = {1, 1, 3, 2, 2};
	int length = sizeof(arr)/sizeof(arr[0]);
	isUnique(arr, length);

}
