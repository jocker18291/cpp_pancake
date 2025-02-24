#include <iostream>

using namespace std;

class DynamicArray {
private:
    int size;
    int capacity;
    int *arr;

    void resize(int *arr) {
        capacity *= 2;
        int *newArr = new int[capacity];
        for(int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }
        delete []arr;
        arr = newArr;
    }

public:
    DynamicArray() {
        capacity = 4;
        size = 0;
        arr = new int[capacity];
    }
    ~DynamicArray() {
        delete []arr;
    }
};

int main() {

    return 0;
}