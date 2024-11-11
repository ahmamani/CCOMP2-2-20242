#include <iostream>
#include "SolPeruano.h"

using namespace std;

int main() {
    SolPeruano p1{4, 50};
    SolPeruano p2{1, 80};
    
    SolPeruano s = p1 + p2;
    //cout << s << endl;
/*
    SolPeruano p3;
    p3 = p2;
    p3.print();
*/
    if (p2 < p1) {
        cout << "p1 es menor";
    }
}