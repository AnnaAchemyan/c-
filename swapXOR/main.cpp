#include <iostream>
using namespace std;

void swapXOR(int &num1, int &num2) {
    cout << "first num  : " << num1 << endl;
	cout << "second num : " << num2 << endl;

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	cout << "---------After swap----------" << endl;
	cout << "first num  : " << num1 << endl;
	cout << "second num : " << num2 << endl;
}

int main() {
    int x = 10, y = 20;

	swapXOR(x, y);
	
}
