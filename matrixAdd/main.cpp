#include <iostream>
#include <vector>

#include "sumMatrix.hpp"
#include "writeFile.hpp"
#include "readFile.hpp"

using namespace std;

int main() {

    auto [row, col, arr1, arr2] = readFile("matrix1.txt", "matrix2.txt");
    vector<int> sumVector = sumMatrix(arr1, arr2);
    writeFile("matrixRes.txt", sumVector, col);

}

