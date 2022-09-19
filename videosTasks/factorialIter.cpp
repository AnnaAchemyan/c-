#include <iostream>

int factorialIter(int num) {
    int res = 1;
    if(num <= 1) {
        return 1;
    }
    for(int i = 2; i <= num; ++i) {
        res *= i;
    }
    return res;

}

int main() {

int res = factorialIter(3);
std::cout << "factorial " << 3 << " is " << res << std::endl;


}