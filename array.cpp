#include <iostream>
#include <cstdlib>
#include <ctime>

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
    int max = arr[0];
    for (int i = 1; i < SIZE; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    cout << "Biggest value is: " << max << endl;
}

void random(int arr[]) {
    int minVal, maxVal;
    cout << "Enter minimum and maximum value of random numbers: ";
    cin >> minVal >> maxVal;
    for(int i = 0; i < SIZE; i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

void display(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

void decToBin(int arr[]) {
    unsigned int num = 0;
    cout << "Enter a number in range [0-30]: ";
    cin >> num;
    for(int i = 0; i < SIZE; i++) {
        arr[i] = -1;
    }
    int end = SIZE - 1;
    while(num > 0 && end >= 0) {
        arr[end] = num % 2;
        num /= 2;
        end--;
    }
}

int search(int arr[], int num) {
    for (int i = 0; i < SIZE; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    srand(time(0));
    int arr[SIZE];
    int choice = 0;
    int num = 0, index = 0;
    do {
        cout << "0 - Exit" << endl;
        cout << "1 - Set elements in the array of size " << SIZE << endl;
        cout << "2 - Sum of all elements of the array" << endl;
        cout << "3 - Largest element of the array" << endl;
        cout << "4 - Random numbers in a range" << endl;
        cout << "5 - Display" << endl;
        cout << "6 - Decimal to binary" << endl;
        cout << "7 - Number search" << endl;
        cout << "Choose: ";
        cin >> choice;
        switch(choice) {
            case 0:
                break;
            case 1:
                setElem(arr);
                break;
            case 2:
                sumOfElem(arr);
                break;
            case 3:
                maxElem(arr);
                break;
            case 4:
                random(arr);
                break;
            case 5:
                display(arr);
                break;
            case 6:
                decToBin(arr);
                break;
            case 7:
                cout << "Enter a number you want to know where it is: ";
                cin >> num;
                index = search(arr, num);
                if(index != -1) {
                    cout << "Your number is on " << index << " place!" << endl;
                }
                else {
                    cout << "No such number in the array." << endl;
                }
                break;
            default:
                cout << "Choice unknown. Try again." << endl;
                break;
        }
    } while(choice != 0);
    return 0;
}