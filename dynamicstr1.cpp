#include <iostream>

using namespace std;

const int SIZE = 15;

void setArr(char str[]) {
    cout << "Enter a string of chars [max 15 characters]: ";
    cin.getline(str, SIZE);
}

void getArr(char str[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << str[i];
    }
    cout << endl;
}

int numOfElem(char str[]) {
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        if(str[i] != '\0') {
            sum++;
        }
    }
    return sum;
}

void convert(char str[]) {
    for(int i = 0; i < SIZE; i++) {
        if(str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
        else if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
}

int main() {
    char str[SIZE];
    setArr(str);
    getArr(str);
    cout << numOfElem(str) << endl;
    convert(str);
    getArr(str);
    return 0;
}