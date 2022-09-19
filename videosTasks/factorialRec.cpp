#include <iostream>

int factorialRec(int num) {

    if(num <= 1) {
        return 1;
    }
        return num * factorialRec(num - 1);
}

int main() {

int res = factorialRec(5);
std::cout << "factorial " << 5 << " is " << res << std::endl;

}