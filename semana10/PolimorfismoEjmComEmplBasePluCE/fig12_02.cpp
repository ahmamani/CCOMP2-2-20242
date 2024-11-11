#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

int main() {
    CommissionEmployee commissionEmployee{
            "Sue", "Jones", "222-22-2222", 10000, .06};
    
    BasePlusCommissionEmployee* bpcePtr{
        &commissionEmployee};
}