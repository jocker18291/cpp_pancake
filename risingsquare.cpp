#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void wait(int sec) {
    this_thread::sleep_for(chrono::seconds(sec));
}

void square(int size) {
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

int main() {
    int size = 2;
    while(true){
        system("clear");
        wait(1);
        square(size);
        wait(1);
        size += 2;
        if(size > 8) {
            size = 2;
        }
    }
    return 0;
}