#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

void virtualViaPointer(const Employee* const);
void virtualViaReference(const Employee&);

int main() {
    cout << fixed << setprecision(2); 

    SalariedEmployee salariedEmployee{
            "John", "Smith", "111-11-1111", 800};
    CommissionEmployee commissionEmployee{
            "Sue", "Jones", "333-33-3333", 10000, .06};
    BasePlusCommissionEmployee basePlusCommissionEmployee{
            "Bob", "Lewis", "444-44-4444", 5000, .04, 300};
    
    vector<Employee *> employees{&salariedEmployee, &commissionEmployee,
        &basePlusCommissionEmployee};

    for(const Employee* ptr : employees) {
        virtualViaPointer(ptr);
    }
    for(const Employee* ptr : employees ) {
        virtualViaReference(*ptr);
    }
}

void virtualViaPointer(const Employee* const baseClassPtr){
    cout << baseClassPtr->toString()
        << "\nearned  $ " << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference(const Employee& baseClassRef) {
    cout << baseClassRef.toString()
        << "\nearned $ " << baseClassRef.earnings() << "\n\n";
}

