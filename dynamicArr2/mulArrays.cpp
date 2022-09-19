#include <iostream>
using namespace std;

void mulArrays(int** sumArr1, int** sumArr2, int size) {

    cout << "Multiplication of two sum matrix " << endl;
    int mulArr[size][size];

    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            mulArr[i][j] = 0;
            for(int k = 0; k < size; ++k) {
                mulArr[i][j] += sumArr1[i][k] * sumArr2[k][j];
            }
            cout << mulArr[i][j] << " ";
        }
        cout << endl;
    }

}