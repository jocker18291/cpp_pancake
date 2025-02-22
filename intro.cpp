#include <iostream>

using namespace std;

int main() {
    float num1 = 0, num2 = 0;
    char operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter your operation (+,-,*,/): ";
    cin >> operation;
    switch(operation){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 * num2 << endl;
            break;
        case '/':
            if(num2 == 0){
                cout << "Error: cannot divide by zero." << endl;
            }
            else{
                cout << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Error: Unknown operation." << endl;
            break;
    }
    return 0;
}