#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee {
    public:
        BasePlusCommissionEmployee(const std::string&, const std::string&,
            const std::string&, double = 0.0, double = 0.0, double = 0.0);

        void setBaseSalary(double);
        double getBaseSalary() const;

        virtual double earnings() const override; // calculate earnings
        virtual std::string toString() const override; // create string representation

    private:        
        double baseSalary;
};

#endif