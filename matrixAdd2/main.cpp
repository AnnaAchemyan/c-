#include <iostream>
#include <fstream>
#include <vector>
#include <functional>
#include <string>
using namespace std;


auto readFile(string path1, string path2) {

    struct retVals {
        int row = 0, col = 0;
        vector<int> arr1;
        vector<int> arr2;
    };

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

vector<int> sumMatrix(vector<int> vect1, vector<int> vect2) {
    transform (vect1.begin(), vect1.end(), vect2.begin(), vect1.begin(), plus<int>());

    return vect1;

}


void writeFile(string path3, vector<int> vect3) {
    ofstream outFile(path3);

        int i = 0;
        for(auto it = vect3.begin(); it != vect3.end(); ++it) {

            outFile << *it << " ";
            ++i;
            if(i % 3 == 0) {
                outFile  << "\n";

            }
        }
}


int main() {

    auto [row, col, arr1, arr2] = readFile("matrix1.txt", "matrix2.txt");
    vector<int> sumVector = sumMatrix(arr1, arr2);
    writeFile("matrixRes.txt", sumVector);

}
