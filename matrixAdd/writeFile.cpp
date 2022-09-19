#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void writeFile(const string path3, vector<int> vect3, int col) {
    ofstream outFile(path3);

        int i = 0;
        for(auto it = vect3.begin(); it != vect3.end(); ++it) {

            outFile << *it << " ";
            ++i;
            if(i % col == 0) {
                outFile  << "\n";

            }
        }
}