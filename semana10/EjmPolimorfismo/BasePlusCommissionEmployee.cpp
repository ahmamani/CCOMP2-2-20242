#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "BasePlusCommissionEmployee.h" // BasePlusCommissionEmployee class definition
using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string& first,
        const string& last, const string& ssn, double sales, double rate, double salary) 
        : CommissionEmployee(first, last, ssn, sales, rate){
    setBaseSalary(salary);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary) {
    if (salary < 0.0) {
        throw invalid_argument("Salary must be >= 0.0");
    }
    baseSalary = salary;
}
double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
} 

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + CommissionEmployee::earnings();
}

string  BasePlusCommissionEmployee::toString() const {
    ostringstream output;
    output << fixed << setprecision(2); // two digits of precision
    output << "base salary: " << CommissionEmployee::toString()
        << "\nbase salary: " << getBaseSalary();
    return output.str();
}