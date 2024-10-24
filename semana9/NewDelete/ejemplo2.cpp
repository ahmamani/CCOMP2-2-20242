#include <iostream>

using namespace std;

int* getPtrToFive() {
    int *ptr = new int;
    *ptr = 5;
    return ptr;
}

int main() {
    int *ptr = getPtrToFive();
    cout << *ptr << endl;
    delete ptr;
}