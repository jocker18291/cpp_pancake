#include <iostream>

using namespace std;

int sum(){
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
    return S;
}

int main(){
    int solution = sum();
    cout << "The sum equals: " << solution << endl;
    return 0;
}