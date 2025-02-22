#include <iostream>

using namespace std;

int main() {
    float a = 0, b = 0, c = 0;
    cout << "Enter your coefficients: ";
    cin >> a >> b >> c;
    float delta = (b * b) + 4 * a * c;
    if (delta < 0) {
        cout << "No real solutions." << endl;
    }
}