#include<iostream>
#include<string>
#include "Estudiante.h"
using namespace std;
int main() {
    Estudiante myestudi("Mathias A");
    cout<<"ingrese nombre:";
    string nombre;

    getline(cin, nombre);
    myestudi.setName(nombre);
    
    cout << "El nombre del estudiane es: "
            << myestudi.getName() << endl;
    
    cout<<"ingrese edad: ";
    int edad;
    cin>>edad;
    myestudi.setAge(edad);    

    cout << "La edad del estudiante es:"
            << myestudi.getAge() << endl;
    
    return 0;

}