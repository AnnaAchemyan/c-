#include <iostream>

using namespace std;

int** generateMatrix(int row, int col) {

    int **arr = new int*[row];
    for(int i = 0; i < row; ++i) {
        arr[i] = new int[col];
        for(int j = 0; j < col; ++j) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;

    return arr;
    delete[] arr;

}