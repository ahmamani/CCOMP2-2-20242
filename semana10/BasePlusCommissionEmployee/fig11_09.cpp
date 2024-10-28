#include <iostream>
#include <iomanip>
#include "BasePlusCommissionEmployee.h" // BasePlusCommissionEmployee class definition
using namespace std;

int main() {
    BasePlusCommissionEmployee employee{"Sue", "Jones", "222-22-2222", 5000, .04, 300};

    cout << fixed << setprecision(2); // set floating-point formatting
    cout << "Employee information obtained by get functions: \n"
        << "\nFirst name is " << employee.getFirstName()
        << "\nLast name is " << employee.getLastName()
        << "\nSocial security number is " 
        << employee.getSocialSecurityNumber()
        << "\nGross sales is " << employee.getGrossSales()
        << "\nCommission rate is " << employee.getCommissionRate()
        << "\nBase salary is " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000);
    cout << "\nUpdated employee information from function toString: \n\n"
    << employee.toString();

    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}