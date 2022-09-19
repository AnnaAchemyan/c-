#include <iostream>

void printNumsRec(int num) {
    if(num >= 0) {
        std::cout << num << " ";
        printNumsRec(num - 1);
    }
}

int main() {

    printNumsRec(7);
    std::cout << std::endl;
}