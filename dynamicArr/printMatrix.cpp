#include <iostream>

using namespace std;

void printMatrix(int** &ptr, int size){

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
                cout << ptr[i][j] << " ";
            }
        cout << endl;
    }
    cout << endl;

}