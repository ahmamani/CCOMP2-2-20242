#include <iostream>
#include "Punto.h"

using namespace std;

int main() {
    Punto p{4, 5};
    Punto r{1, 1};
    p.print();

    Punto q{p}; // Se invoca al constructor copia
    q.print();

    //cout << p << endl;
    Punto s = p + r;

}