#include <iostream>

using namespace std;

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 3;
    int b = 5;
    intercambio(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}