#include <iostream>
#include "Point.h"

using namespace std;

void printPointArr(Point *arr, int tam) {
    for(int i = 0; i < tam; i++, arr++){
        arr->print();
    }
}

int main() {
    Point *p1 = new Point;
    p1->print();

    Point *p2 = new Point(3,4);
    p2->print();

    delete p1;
    delete p2;
}