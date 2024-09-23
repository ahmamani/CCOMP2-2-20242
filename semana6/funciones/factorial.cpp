#include <iostream>

using namespace std;

/**
 * Factorial recursivo
*/
int factorial_rec(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial_rec(n-1);
    }
}

/**
 * Fibonacci iterativo
*/
int factorial_it(int n) {
    int fac = 1;
    for(int i = 1; i <= n; i++) {
        fac *= i;
    }
    return fac;
}

int main() {
    cout << factorial_rec(5) << endl;
    cout << factorial_it(5) << endl;
}