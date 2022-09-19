

void deAllocate(int** &arr, int size) {
    for(int i = 0; i < size; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

}

void deAllocate(int** &arr1, int** &arr2, int size) {
    for(int i = 0; i < size; ++i) {
        delete[] arr1[i];
    }
    delete[] arr1;

    for(int i = 0; i < size; ++i) {
        delete[] arr2[i];
    }
    delete[] arr2;
}

void deAllocate(int** &arr1, int** &arr2, int** &arr3, int** &arr4, int size) {
    for(int i = 0; i < size; ++i) {
        delete[] arr1[i];
    }
    delete[] arr1;

    for(int i = 0; i < size; ++i) {
        delete[] arr2[i];
    }
    delete[] arr2;

    for(int i = 0; i < size; ++i) {
        delete[] arr3[i];
    }
    delete[] arr3;

    for(int i = 0; i < size; ++i) {
        delete[] arr4[i];
    }
    delete[] arr4;
}