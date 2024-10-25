#include <iostream>
#include "Point.h"

using namespace std;

void printPointArr(Point *arr, int tam) {
    for(int i = 0; i < tam; i++, arr++){
        arr->print();
    }
}

int main() {
    Point p;
    // para invocar a los métodos de la instancia
    // usando usando la misma instancia se utiliza . (punto)
    p.print();

    Point *ptr = &p; // ptr tiene la dirección de memoria de p
    // para invocar a los métodos de la instancia
    // usando el puntero se utiliza el operador -> (flechita)
    ptr->print();

    ptr->setX(5);
    ptr->print();

    Point arr[3];
    int tam = sizeof(arr) / sizeof(arr[0]);
    printPointArr(arr, tam);
    
}