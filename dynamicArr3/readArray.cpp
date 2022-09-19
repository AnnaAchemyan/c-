#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int** readArray(const string path, int size) {

    int **arrDyn = new int*[size];
    int arr[size * size];
    int num;

    fstream File;
    File.open(path);

    int counter = 0;
    while (File >> num) {
        arr[counter] = num;
        ++counter;
    }

    int count = 0;
    int &c = count;

    for(int i = 0; i < size; ++i) {
        arrDyn[i] = new int[size];
        for(int j = 0; j < size; ++j) {

            arrDyn[i][j] = arr[count];
            ++count;
        }
    }

    return arrDyn;
}
