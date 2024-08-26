#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Ingrese un caracter por favor: ";
    cin >> c;

    int val = static_cast<int>(c);
    cout << "El valor entero de su variable ingresada es: " << val << endl;
    
    return 0;
}