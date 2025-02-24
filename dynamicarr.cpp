#include <iostream>

using namespace std;

class DynamicArray {
private:
    int size;
    int capacity;
    int *arr;

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