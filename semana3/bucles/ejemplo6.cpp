#include <iostream>

using namespace std;
/**
 * Implemente un programa que lea por tecla numeros hasta ingresar el numero 0 e imprima 
 * la suma de todos los numeros ingresados.
*/
int main() {
    int x = 0; 
    int suma = 0;
    cout << "Ingrese un número: "; 
    cin >> x; 

    while (x != 0) {
        suma = suma + x;
        cin >> x; 
    }
    cout << "La suma es: " << suma << "\n";  

    return 0;
}