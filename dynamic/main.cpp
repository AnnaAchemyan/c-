#include <iostream>
using namespace std;



int main() {
	int row, col;
	cout << "Enter row number ";
	cin >> row;
	cout << "Enter col number ";
	cin >> col;
//	int row = 3, col = 3;
	int **arr = new int*[row];
	for(int k = 0; k < row; ++k) {
		arr[k] = new int[col];

	}
	int num = 0;
	for(int i = 0; i < row; ++i) {
		for(int j = 0; j < col; ++j) {
			arr[i][j] = num;
			cout << arr[i][j] << " ";
			++num;
		}
		cout << endl;
	}	
}
