#include <iostream>

using namespace std;

const int SIZE = 5;

void setElem(int arr[]) {
    for(int i = 0; i < SIZE; i++) {
        cout << "Enter the element no. " << i+1 << " : ";
        cin >> arr[i];
    }
}

void sumOfElem(int arr[]) {
    int S = 0;
    for (int i = 0; i < SIZE; i++) {
        S += arr[i];
    }
    cout << S << endl;
}

void maxElem(int arr[]) {
    int max = 0;
    for (int i = 0; i < SIZE; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Biggest value is: " << max << endl;
}

int main() {
    int arr[SIZE];
    int choice = 0;
    do {
        cout << "0 - Exit" << endl;
        cout << "1 - Set elements in the array of size " << SIZE << endl;
        cout << "2 - Sum of all elements of the array" << endl;
        cout << "3 - Largest element of the array" << endl;
        cout << "Choose: ";
        cin >> choice;
        switch(choice) {
            case 0:
                break;
            case 1:
                setElem(&arr[SIZE]);
                break;
            case 2:
                sumOfElem(&arr[SIZE]);
                break;
            case 3:
                maxElem(&arr[SIZE]);
                break;
            default:
                cout << "Choice unknown. Try again." << endl;
                break;
        }
    } while(choice != 0);
    return 0;
}