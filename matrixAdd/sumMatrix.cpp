#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<int> sumMatrix(vector<int> vect1, vector<int> vect2) {
    transform (vect1.begin(), vect1.end(), vect2.begin(), vect1.begin(), plus<int>());

    return vect1;

}