#include <iostream>
int arr[10];
int fibonacciRec(int num) {
    if(num <= 1) {
        return 1;
    }
    if(!arr[num]) {
        arr[num] = fibonacciRec(num - 1) + fibonacciRec(num - 2);
        return arr[num];
    } else {
        return arr[num];

    }
}


int main() {

    std::cout << fibonacciRec(6) << std::endl;

}