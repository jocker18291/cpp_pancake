#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a = 0, b = 0, c = 0;
    cout << "Enter your coefficients: ";
    cin >> a >> b >> c;
    float delta = (b * b) - 4 * a * c;
    if (delta < 0) {
        cout << "No real solutions." << endl;
    }
    else if(delta == 0) {
        cout << "The solution equals to: " << (-1 * b) / (2 * a) << endl;
    }
    else {
        cout << "Solutions are equal to " << ((-1 * b) + sqrt(delta)) / (2 * a) << " and " << ((-1 * b) - sqrt(delta)) / (2 * a) << endl;
    }
    return 0;
}