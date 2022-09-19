#include <iostream>
using namespace std;

void swap(int num1, int num2) {
	cout << num1 << "  " << num2 << endl;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int n; 
	n = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = n;
	cout << num1 << "  " << num2 << endl;
}

void swap1(int num11, int num22) {
	cout << num11 << "  " << num22 << endl;
	int *ptr11 = &num11;
	int *ptr22 = &num22;
	*ptr11 = *ptr11 + *ptr22;
	*ptr22 = *ptr11 - *ptr22;
	*ptr11 = *ptr11 - *ptr22;
	cout << num11 << "  " << num22 << endl;

}

void add(int s1, int s2) {
	int *ptr1 = &s1;
	int *ptr2 = &s2;
	int sum = 0;
	sum = *ptr1 + *ptr2;
	cout << "sum " << sum << endl;
}

void sumArrayElem() {
	int arr[] = {1, 2, 3, 4};
	int length = sizeof(arr)/sizeof(arr[0]);
	int *ptr1 = arr;
	int sum = 0;
	for(int i = 0; i < length; ++i) {
		sum += *ptr1;
		ptr1++;
	}
	cout << "sum of array alements " << sum << endl;
}

void MyStrLen(char *str) {
	int count = 0;
	while(str[count] != '\0') {
		count++;
	}
	cout << "String length " << count << endl;
}

int main() {
	char str[] = "hello";
//	swap(10, 20);
//	swap1(10, 20);
//	add(7, 7);
//	sumArrayElem();
	MyStrLen(str);


}
