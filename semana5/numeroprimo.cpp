#include <iostream>
using namespace std;

/**
 * Implementar una función que me indique si un número es primo
 *  esPrimo -> true ---- si el numero es primo
 *  esPrimo -> false --- si el numero no es primo
*/
/**
 * Un numero es primo cuando es divisible entre si mismo y 1.
 *  n
 * i = 2
 * mientras ( i < n )
 *      si n entre i no es CERO
 *          retorna false
 *      incrementar i en 1
 * retorna true
*/
bool esPrimo(int num) {
    int i=2;
    if (num<=1){
        return false;
    }
    while(i < num){
        if (num % i == 0){
            return false;
        }
        i++;
    }
    return true;
}
/**
 * Implemente una función que reciba un entero e imprima los numeros 
 * numeros primos menores a dicho entero.
*/
void imprimirPrimos(int n) {
    for (int i{2}; i < n; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
}
int main() {
    imprimirPrimos(50);
    //2 3 5 7 11 13 17 19 23 29 31 37 41 47    

    return 0;
}
