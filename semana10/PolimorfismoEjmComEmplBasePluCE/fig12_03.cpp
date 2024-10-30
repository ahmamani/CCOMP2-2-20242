#include <string>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {
    BasePlusCommissionEmployee bpce{
            "Bob", "Lewis", "333-33-3333", 5000, .04, 300};
    
    CommissionEmployee* cePtr{&bpce};

    string firstName{cePtr->getFirstName()};
    string lastName{cePtr->getLastName()};
    string ssn{cePtr->getSocialSecurityNumber()};
    double grossSales{cePtr->getGrossSales()};
    double commissionRate{cePtr->getCommissionRate()};

    double baseSalary{cePtr->getBaseSalary()};
    cePtr->setBaseSalary(500);


}
