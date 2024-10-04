/*ARREGLOS Y PUNTEROS*/
#include <iostream>

using namespace std;

int main() {    
    int array[] = {1,2,3,4,5};
    int tam = sizeof(array) / sizeof(array[0]);

    int *ptr = &array[0];
    cout << ptr << endl;
    cout << *ptr << endl;
/**
 * EL NOMBRE DE UN ARREGLO ES UN PUNTERO AL PRIMER ELEMENTO DEL ARREGLO
*/
    cout << array << endl;
    cout << (array+0) << " - " << *(array+0) << endl;
    cout << (array+1) << " - " << *(array+1) << endl;
    cout << (array+2) << " - " << *(array+2) << endl;
    cout << (array+3) << " - " << *(array+3) << endl;
    cout << (array+4) << " - " << *(array+4) << endl;

/**
 * ARITMÉTICA DE PUNTEROS
 * 
 *  ++              --
*/
    int *ini = array;
    cout << "Aritmetica de punteros" << endl;
    cout << ini << " - " << *ini << endl;
    ini++; // estoy haciendo que mi puntero apunte al siguiente elemento del arreglo.
    cout << ini << " - " << *ini << endl;
    ini++;
    cout << ini << " - " << *ini << endl;

    int *end = array + tam -1;
    cout << end << " - " << *end << endl;
    end--;
    cout << end << " - " << *end << endl;


    



    return 0;
}