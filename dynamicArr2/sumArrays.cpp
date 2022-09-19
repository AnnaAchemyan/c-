#include <iostream>
using namespace std;

int** sumArrays(int** arr1, int** arr2, int size) {

    cout << "Sum two arrays " << endl;
    int **arrSum = new int*[size];

    for(int i = 0; i < size; ++i) {
        arrSum[i] = new int[size];
        for(int j = 0; j < size; ++j) {

            arrSum[i][j] = arr1[i][j] + arr2[i][j];
            cout << arrSum[i][j] << " ";

        }
        cout << endl;
    }
    cout << endl;

    return arrSum;
    delete[] arrSum;
}
