#include <iostream>

using namespace std;

void sum(){
    int n = 0;
    int S = 0;
    while (true){
        cout << "Enter numbers to sum (only summing nums from -15 to 15; 99 will end the loop): ";
        cin >> n;
        if (n >= -15 && n <= 15){
            S += n;
        }
        if(n == 99){
            break;
        }
    }
    cout << "The sum equals: " << S << endl;
}

void Euclid(){
    unsigned int a, b;
    cout << "Enter two unsigned nums: ";
    cin >> a >> b;
    while (a != b) {
        if (a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    cout << "The solution equals to " << a << endl;
}

int main(){
    int choice = 0;
    do {
        cout << "Enter a number to run the given program: ";
        cin >> choice;
        switch (choice) {
            case 0:
                break;
            case 1:
                sum();
                break;
            case 2:
                break;
            default:
                cout << "Unknown choice. Try again." << endl;
        }
    } while (choice != 0);
    
    return 0;
}