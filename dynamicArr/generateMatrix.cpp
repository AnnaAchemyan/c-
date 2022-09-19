#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "fileName.hpp"

using namespace std;

void generateMatrix(int row, int col) {

    static int num = 1;
    string file = fileName("matrix", num);

    ofstream outFile(file);
    for(int i = 0; i < row; ++i) {
        int counter = 0;
        for(int j = 0; j < col; ++j) {

            outFile <<  rand() % 10 << " ";
            ++counter;
            if(counter % col == 0) {
                outFile  << "\n";

            }
        }
    }
}
