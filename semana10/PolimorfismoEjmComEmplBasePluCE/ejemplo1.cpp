#include <iostream>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;

int main() {
    BasePlusCommissionEmployee bpce{
            "Bob", "Lewis", "333-33-3333", 5000, .04, 300};
    
    CommissionEmployee ceTmp{bpce};
    cout << ceTmp.toString();

    CommissionEmployee ce{
            "Sue", "Jones", "222-22", 10000, .06};
    //BasePlusCommissionEmployee bpceTmp{ce};

}
