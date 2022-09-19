#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "fileName.hpp"

using namespace std;

void writeFile(int** &arr, string str, int size) {

        static int num = 1;
        string file = fileName(str, num);
        ofstream outFile(file);

        for(int i = 0; i < size; ++i) {
            int counter = 0;
            for(int j = 0; j < size; ++j) {

                outFile <<  arr[i][j] << " ";
                ++counter;
                if(counter % size == 0) {
                    outFile  << "\n";

                }
            }
        }
}