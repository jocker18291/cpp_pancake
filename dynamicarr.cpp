#include <iostream>

using namespace std;

class DynamicArray {
private:
    int size;
    int capacity;
    int *arr;

    void resize() {
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

    void addElement(int value) {
        if(size == capacity) {
            resize();
        }
        arr[size] = value;
        size++;
    }

    void removeElement(int index) {
        if(index < 0 || index >= size) {
            cout << "Index out of range\n";
            return;
        }
        for(int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void displayCount() const {
        cout << "Size: " << size << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

int main() {
    DynamicArray array;
    array.addElement(5);
    array.addElement(17);
    array.addElement(90);
    array.addElement(29);
    array.addElement(78);
    array.display();
    array.displayCount();
    array.removeElement(2);
    array.display();
    array.displayCount();
    return 0;
}