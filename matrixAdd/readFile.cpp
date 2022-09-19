#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct retVals {
    int row = 0, col = 0;
    vector<int> arr1;
    vector<int> arr2;
};

retVals readFile(const string path1, const string path2) {

    retVals val;

    int num1, num2;
    string str = "";
    fstream File1, File2;
    File1.open(path1);
    File2.open(path2);

    while (File1 >> num1) {
        val.arr1.push_back(num1);
    }
    while (File2 >> num2) {
        val.arr2.push_back(num2);
    }

    File1.close();
    File1.open(path1);

    while(!File1.eof()){
        getline(File1, str);
        ++val.row;
    }

    File1.close();

    val.col = val.arr1.size()/val.row;


    return retVals {val.row, val.col, val.arr1, val.arr2};

}