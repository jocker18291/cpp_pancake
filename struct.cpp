#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Present {
private:
    string code;
    string content;
    float weight;
    char size;
    string color;
};

void loadPresents(vector<Present> presents, const string &filename) {
    ifstream file(filename);
    if(!file) {
        cout << "No such database file." << endl;
        return;
    }
}

int main() {

    return 0;
}