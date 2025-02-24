#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void dynArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = pow(2.0, i);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "[" << i << "] 2^" << i << " = " << arr[i] << endl;
    }
}

int main() {
    srand(time(0));
    int *arr;
    int size = 16 + rand() % (32 - 16 + 1);
    arr = new int[size];
    dynArr(arr, size);
    display(arr, size);
    delete []arr;
    return 0;
}