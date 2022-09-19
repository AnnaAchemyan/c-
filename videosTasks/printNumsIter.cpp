#include <iostream>

void printNumsIter(int num) {
    if(num >= 0) {
        for(int i = num; i >= 0; --i) {
            std::cout << i << " ";
        }
    }
}

int main() {

    printNumsIter(7);
    std::cout << std::endl;
}