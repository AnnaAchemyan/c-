#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int** readArray(const string path, int size) {

    int **arrDyn = new int*[size];
    ifstream file;
    file.open(path);
    for(int i = 0; i < size; ++i){
        arrDyn[i] = new int[size];
            for(int j = 0; j < size; ++j){
                    file >> arrDyn[i][j];
            }
    }
    return arrDyn;
}
