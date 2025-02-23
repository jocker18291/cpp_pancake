#include <iostream>

using namespace std;

const int SIZE = 5;

void setElem() {
    for(int i = 0; i < SIZE; i++) {
        
    }
}

int main() {
    int choice = 0;
    do {
        cout << "0 - Exit" << endl;
        cout << "1 - Set elements in an array of size 5" << endl;
        cout << "Choose: ";
        cin >> choice;
        switch(choice) {
            case 0:
                break;
            case 1:
                setElem();
                break;
            default:
                cout << "Choice unknown. Try again." << endl;
                break;
        }
    } while(choice != 0);
    return 0;
}