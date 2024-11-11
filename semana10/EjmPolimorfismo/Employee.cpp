#include <sstream>
#include "Employee.h"

using namespace std;

Employee::Employee(const string& first, const string& last,
        const string& ssn)
        : firstName(first), lastName(last), socialSecurityNumber(ssn) {}

void Employee::setFirstName(const string& first) {
    firstName = first;
}
string Employee::getFirstName() const {
    return firstName;
}

void Employee::setLastName(const string& last) {
    lastName = last;
}
string Employee::getLastName() const {
    return lastName;
}

void Employee::setSocialSecurityNumber(const string& ssn) {
    socialSecurityNumber = ssn; // should validate
}
string Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

// toString Employee's information (virtual, but not pure virtual)
string Employee::toString() const {
    return getFirstName() + " "s + getLastName() +
        "\nsocial security number: "s + getSocialSecurityNumber();
}
