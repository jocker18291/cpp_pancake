#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a = 0, b = 0, c = 0;
    cout << "Enter your coefficients: ";
    cin >> a >> b >> c;
    float delta = (b * b) - 4 * a * c;
    if(a != 0){
        if (delta < 0) {
            cout << "No real solutions." << endl;
        }
        else if(delta == 0) {
            cout << "The solution equals to: " << (-1 * b) / (2 * a) << endl;
        }
        else {
            cout << "Solutions are equal to " << ((-1 * b) + sqrt(delta)) / (2 * a) << " and " << ((-1 * b) - sqrt(delta)) / (2 * a) << endl;
        }
    }
    else if(a == 0) {
        if(b != 0){
            cout << "It's linear and the solution is: " << (-1 * c) / b << endl;
        }
        else if(b == 0 && c != 0){
            cout << "The equation has no solutions." << endl;
        }
        else if (b == 0 && c == 0){
            cout << "All real numbers are the solution." << endl;
        }
    }
    return 0;
}