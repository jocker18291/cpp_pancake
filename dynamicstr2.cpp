#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

void dynArr(int arr[]) {
    
}

int main() {
    int *arr;
    arr = new int[16 + rand() % (32 - 16 + 1)];
    srand(time(0));
    dynArr(arr);
    delete []arr;
    return 0;
}