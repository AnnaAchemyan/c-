#include <iostream>
// #include <string>
#include <fstream>
#include <sstream>

using namespace std;

string mulFileName(int &n) {
    std::ostringstream os;
    os << "mulFile_" << n << ".txt";
    std::string s = os.str();
    ++n;
    return s;
}

void mulArrays(int** sumArr1, int** sumArr2, int size) {

    static int n = 1;
    string file = mulFileName(n);
    ofstream outFile(file);

    cout << "Multiplication of two sum matrix " << endl;
    int mulArr[size][size];

    for(int i = 0; i < size; ++i) {
        int counter = 0;
        for(int j = 0; j < size; ++j) {
            mulArr[i][j] = 0;
            for(int k = 0; k < size; ++k) {
                mulArr[i][j] += sumArr1[i][k] * sumArr2[k][j];
            }
            cout << mulArr[i][j] << " ";

            outFile << mulArr[i][j] << " ";
            ++counter;
            if(counter % size == 0) {
                outFile  << "\n";
            }
        }
        cout << endl;
    }

}