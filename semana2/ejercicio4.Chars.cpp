/**
 * Implemente un programa que solicite por teclado un caracter
 * y verifique si dicho caracter representa un numero.
*/
#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter por favor: ";
    cin >> c;

    int val = static_cast<int>(c);
    
    if(val>=48 && val<=57)
     {
        cout <<"es un numero" <<endl;
     }
    else
     {
        cout << "no es un numero" <<endl;
     }
    
    
    return 0;
}