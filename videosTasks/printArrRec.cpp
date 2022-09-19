#include <iostream>

void printArrRec(int *arr, int size) {
    if(size == 0) {
        return;
    }
    std::cout << *arr << " ";

    printArrRec(arr + 1, size - 1);

    }

int main() {
    int size = 3;
    int arr[size] = {1, 2, 3};
    printArrRec(arr, size);
    std::cout << std::endl;
}