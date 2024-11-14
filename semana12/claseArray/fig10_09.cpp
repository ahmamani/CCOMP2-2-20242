#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main() {
    Array integer1{7};
    Array integer2;

    cout << "Size of Array integer1 is " << integer1.getSize()
        << "\nArray after initialization: " << integer1;

    cout << "\nSize of Array integer2 is " << integer2.getSize()
        << "\nArray after initialization: " << integer2;

    cout << "\nEnter 17 integers:" << endl;
    cin >> integer1 >> integer2;

    cout << "\nAfter input, the Arrays contain:\n"
        << "integer1: " << integer1
        << "integer2: " << integer2;

    cout << "\nEvaluating: integer1 != integer2" << endl;
    if(integer1 != integer2) {
        cout << "integer1 and integer2 are not equal" << endl;
    }
    Array integer3{integer1};
    cout << "\nSize of Array integer3 is " << integer3.getSize()
        << "\nArray after initialization: " << integer3;
    
    cout << "\nAssigning integer2 to integer1" << endl;
    integer1 = integer2;

    cout << "integer1: " << integer1 << "integer2:" << integer2;

    cout << "\nEvaluating: integer1 == integer2" << endl;
    if(integer1 == integer2) {
        cout << "integer1 and integer2 are equal" << endl;
    }

    cout << "\ninteger1[5] is " << integer1[5];

    cout << "\nAssigning 1000 to integer1[5]" << endl;
    integer1[5] = 1000;
    cout << "integer1: " << integer1;

    try{
        cout << "\nAttempt to assign 100 to integer1[15]" << endl;
        integer1[15] = 1000;
    } catch(out_of_range& ex) {
        cout << "An exception occurred: " << ex.what() << endl;
    }
}