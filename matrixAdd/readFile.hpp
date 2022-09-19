#ifndef READFILE
#define READFILE
#include <string>
using namespace std;

struct retVals {
    int row, col;
    vector<int> arr1;
    vector<int> arr2;
};

retVals readFile(const string, const string);

#endif
