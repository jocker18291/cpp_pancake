#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

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

    presents.clear();

    string line;
    while(getline(file, line)) {
        stringstream ss(line);
        Present p;
        string weightStr;
    }
}

int main() {

    return 0;
}