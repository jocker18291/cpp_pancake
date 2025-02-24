#include <iostream>
#include <map>

using namespace std;

void histogram(string str) {
    map<char, int> count;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        }
    }
    for (auto &p : count) {
        cout << p.first << " " << string(p.second, '#') << endl;
    }
}

int main() {
    string str;
    cout << "Enter a text: ";
    cin >> str;
    return 0;
}