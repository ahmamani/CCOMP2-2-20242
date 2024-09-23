#include <iostream>

using namespace std;

/**
 * Fibonacci recursivo
*/
int fibonacci_rec(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci_rec(n-1) + fibonacci_rec(n-2);
    }
}

/**
 * Fibonacci iterativo
*/
int fibonacci_it(int n) {
    int fib = 1;
    int n1 = 0;
    int n2 = 0;
    for(int i = 0; i < n; i++) {        
        n2 = n1;
        n1 = fib;        
        fib = n1 + n2;
    }
    return fib;
}

int main() {
    cout << fibonacci_rec(1) << endl;
    cout << fibonacci_it(1) << endl;
}