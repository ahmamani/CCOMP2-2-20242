#include <iostream>

using namespace std;

int* getPtrToFive() {
    int x = 10;
    return &x;
}

int main() {
    int *ptr = getPtrToFive();
    cout << *ptr << endl;
}