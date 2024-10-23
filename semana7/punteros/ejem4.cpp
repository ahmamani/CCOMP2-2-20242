#include <iostream>

using namespace std;
/**
 * Implemente una función que reciba un arreglo de enteros y su 
 * tamaño y duplique todos los elementos del arreglo
 */
void duplicateElems(int *arr, int tam) {
    for(int i = 0; i < tam; i++) {
        *(arr+i) *= 2;
    }
}
void printArray(const int *arr, const int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++) {
        cout << *(arr+i) << " ";
    }
    cout << "]" << endl;
}
/**
 * Implemente una función que reciba un arreglo de enteros y su tamaño
 * y retorne el arreglo invertido.
 * 
 *   antes   [1 2 3 4 5 6]
 *   despues [6 5 4 3 2 1]
*/
void invertir(int array[], int tam) {
    for(int i = 0; i < tam; i++, tam--) {
        int tmp = array[i];
        array[i] = array[tam-1];
        array[tam-1] = tmp;
    }
}

void invertirPtr(int *ini, int *fin) {
    while(ini<=fin) {
        int tmp = *ini;
        *ini = *fin;
        *fin = tmp;
        ini++;
        fin--;
    }
}


int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,10,12,13,14};
    int tam = sizeof(array) / sizeof(array[0]);
    duplicateElems(array, tam);
    printArray(array, tam);
    invertir(array, tam);
    printArray(array, tam);
    invertirPtr(array, array+tam-1);
    printArray(array, tam);
    return 0;
} 

