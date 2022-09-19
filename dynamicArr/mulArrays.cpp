#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int** mulArrays(int** &sumArr1, int** &sumArr2, int size) {

    int **mulArr = new int*[size];

    for(int i = 0; i < size; ++i) {
            mulArr[i] = new int[size];
        for(int j = 0; j < size; ++j) {
            mulArr[i][j] = 0;
            for(int k = 0; k < size; ++k) {
                mulArr[i][j] += sumArr1[i][k] * sumArr2[k][j];
            }

        }
    }

    return mulArr;

}