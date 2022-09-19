#include <iostream>
#include <fstream>
#include "generateMatrix.hpp"
#include "sumArrays.hpp"
#include "mulArrays.hpp"
#include "getSize.hpp"
#include "deAllocate.hpp"
#include "readArray.hpp"
#include "writeFile.hpp"
#include "printMatrix.hpp"

using namespace std;


int main() {

    int size = getSize();

    generateMatrix(size, size);
    generateMatrix(size, size);
    generateMatrix(size, size);
    generateMatrix(size, size);

    int **arr1 = readArray("matrix1.txt", size);
    int **arr2 = readArray("matrix2.txt", size);
    int **arr3 = readArray("matrix3.txt", size);
    int **arr4 = readArray("matrix4.txt", size);

    int **s1 = sumArrays(arr1, arr2, size);
    int **s2 = sumArrays(arr3, arr4, size);

    writeFile(s1, "sum", size);
    writeFile(s2, "sum", size);

    int **arrSum1 = readArray("sum1.txt", size);
    int **arrSum2 = readArray("sum2.txt", size);

    printMatrix(arrSum1, size);
    printMatrix(arrSum2, size);

    int **mul = mulArrays(arrSum1, arrSum2, size);

    writeFile(mul, "mul", size);

    printMatrix(mul, size);

    deAllocate(mul, size);
    deAllocate(arrSum1, arrSum2, size);
    deAllocate(s1, s2, size);
    deAllocate(arr1, arr2, arr3, arr4, size);

}