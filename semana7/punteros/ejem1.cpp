#include <iostream>

using namespace std;

int main() {
    int x = 10;
    cout << &x << endl;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << *&x << endl;

    int y = 1000;
    cout << &y << endl;
    ptr = &y;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}