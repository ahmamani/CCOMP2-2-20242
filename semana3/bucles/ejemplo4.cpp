#include <iostream>

using namespace std;

/**
 * break
 * =====
 * Rompe el bucle.
 * 
 * continue
 * ========
 * Salta a la siguiente iteración.
 * 
*/
int main() {
    int x{0};

    while(x < 10) {
        x = x + 1;
        if(x == 5){
            continue;
        }    
        cout << x << endl;
    }

    return 0;
}