#include <iostream>

using namespace std;
/**
 * Implemente una función que reciba un arreglo de enteros y su 
 * tamaño y duplique todos los elementos del arreglo
 */
void duplicateElems(int arr[], int tam) {
    for(int i = 0; i < tam; i++) {
        arr[i] *= 2;
    }
}
void printArray(const int arr[], const int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int array[] = {1,2,3,4,5,6,7,8,9};
    int tam = sizeof(array) / sizeof(array[0]);
    duplicateElems(array, tam);
    printArray(array, tam);
    return 0;
} 

