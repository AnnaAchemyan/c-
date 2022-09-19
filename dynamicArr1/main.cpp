#include <iostream>
#include "generateMatrix.hpp"
#include "sumArrays.hpp"
#include "mulArrays.hpp"
#include "getSize.hpp"
using namespace std;

int main() {

    int size = getSize();
    int **arr1 = generateMatrix(size, size);
    int **arr2 = generateMatrix(size, size);
    int **arrSum1 = sumArrays(arr1, arr2, size);
    int **arr3 = generateMatrix(size, size);
    int **arr4 = generateMatrix(size, size);
    int **arrSum2 = sumArrays(arr3, arr4, size);
    mulArrays(arrSum1, arrSum2, size);

}