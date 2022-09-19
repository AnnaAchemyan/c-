#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

string arrFileName(int &n) {
    std::ostringstream os;
    os << "file_" << n << ".txt";
    std::string s = os.str();
    ++n;
    return s;
}

int** generateMatrix(int row, int col) {

    static int n = 1;
    string file = arrFileName(n);

    ofstream outFile(file);
    int **arr = new int*[row];
    for(int i = 0; i < row; ++i) {
        arr[i] = new int[col];
        int counter = 0;
        for(int j = 0; j < col; ++j) {
            arr[i][j] = rand() % 10;
            cout << arr[i][j] << " ";

            outFile << arr[i][j] << " ";
            ++counter;
            if(counter % col == 0) {
                outFile  << "\n";

            }
        }
        cout << endl;
    }
    cout << endl;

    return arr;
}
