#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {
    CommissionEmployee ce{
            "Sue", "Jones", "222-22", 10000, .06};
    
    BasePlusCommissionEmployee bpce{
            "Bob", "Lewis", "3333-33", 5000, .04, 300};
    
    cout << fixed << setprecision(2);

    cout << "Base class and Derived-class\n"
        << ce.toString()
        <<  "\n\n"
        << bpce.toString();
    
    CommissionEmployee* cePtr{&ce};
    cout << "\n\nCalling toString with Base-class pointer\n"
        << cePtr->toString();

    BasePlusCommissionEmployee* bpcePtr{&bpce};
    cout << "\n\nCalling toString with Derived-class pointer\n"
        << bpcePtr->toString();

    cePtr = &bpce;
    cout << "\n\nCalling derived-class' toString with Base-class pointer\n"
        << cePtr->toString();
}