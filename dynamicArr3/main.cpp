#include <iostream>
#include <fstream>
#include "generateMatrix.hpp"
#include "sumArrays.hpp"
#include "mulArrays.hpp"
#include "getSize.hpp"
#include "deAllocate.hpp"
#include "readArray.hpp"
using namespace std;


int main() {

    int size = getSize();

    generateMatrix(size, size);
    generateMatrix(size, size);
    generateMatrix(size, size);
    generateMatrix(size, size);

    int **arr1 = readArray("file_1.txt", size);
    int **arr2 = readArray("file_2.txt", size);
    int **arr3 = readArray("file_3.txt", size);
    int **arr4 = readArray("file_4.txt", size);

    sumArrays(arr1, arr2, size);
    sumArrays(arr3, arr4, size);

    int **arrSum1 = readArray("sumFile_1.txt", size);
    int **arrSum2 = readArray("sumFile_2.txt", size);

    mulArrays(arrSum1, arrSum2, size);

    deAllocate(arr1);
    deAllocate(arr2);
    deAllocate(arr3);
    deAllocate(arr4);
    deAllocate(arrSum1);
    deAllocate(arrSum2);

}