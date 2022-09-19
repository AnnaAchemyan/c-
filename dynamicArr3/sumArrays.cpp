#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

string sumFileName(int &n) {
    std::ostringstream os;
    os << "sumFile_" << n << ".txt";
    std::string s = os.str();
    ++n;
    return s;
}

void sumArrays(int** arr1, int** arr2, int size) {

    static int n = 1;
    string file = sumFileName(n);
    ofstream outFile(file);
    cout << "Sum two arrays " << endl;
    int **arrSum = new int*[size];

    for(int i = 0; i < size; ++i) {
        arrSum[i] = new int[size];
        int counter = 0;
        for(int j = 0; j < size; ++j) {

            arrSum[i][j] = arr1[i][j] + arr2[i][j];
            cout << arrSum[i][j] << " ";

            outFile << arrSum[i][j] << " ";
            ++counter;
            if(counter % size == 0) {
                outFile  << "\n";
            }

        }
        cout << endl;
    }
    cout << endl;
}