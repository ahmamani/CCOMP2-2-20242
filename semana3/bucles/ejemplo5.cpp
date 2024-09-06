#include <iostream>

using namespace std;

/**
 * operador de incremento ++
 * Por ejm. si la variable a = 10
 * la expresion a++, significa que a se incrementará en 1.
 * 
 *                      int c = 10;
 *                  /               \
 *      int x = c++;        |      int x = ++c;
 *      
 * 
 * operador de decremento --
*/

int main() {
    int c = 10;
    int x = ++c;
    cout << c << endl;
    cout << x << endl;    

    return 0;
}