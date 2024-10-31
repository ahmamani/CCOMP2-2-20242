#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
    public:
        Employee(const std::string&, const std::string&, const std::string &);
        virtual ~Employee() = default;

        void setFirstName(const std::string&); // set first name
        std::string getFirstName() const; // return first name

        void setLastName(const std::string&); // set last name
        std::string getLastName() const; // return last name

        void setSocialSecurityNumber(const std::string&); // set SSN
        std::string getSocialSecurityNumber() const; // return SSN

        virtual double earnings() const = 0;
        virtual std::string toString() const;
    private:
        std::string firstName;
        std::string lastName;
        std::string socialSecurityNumber;
};

#endif