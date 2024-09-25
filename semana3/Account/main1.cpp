#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {
    Account myAccount{"Jane Green"};
    cout << "El nombre inicial de la cuenta es: "
            << myAccount.getName();
    
    cout << "\nPor favor, ingrese el nombre de la cuenta: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);
    cin.ignore();
    getline(cin, theName);
    cout << theName << endl;

    cout << "El nombre en el objeto my Account es: "
            << myAccount.getName() << endl;

    return 0;
}