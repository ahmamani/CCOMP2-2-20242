#include <iostream>

using namespace std;

void printArray(const int arr[], const int size) {
    cout << "[ ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

void printReverse(const int arr[], const int size) {
    cout << "[ ";
    for(int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

long long sumArrayElems(const int arr[], const int size) {
    long long sum{0};
    for(int i = 0; i < size; sum += arr[i++]);
    return sum;
}

int main() {
    int arr[4];
    cout << "Ingrese 4 valores enteros: "<< endl;

    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Los valores en el arreglo son: ";
    printArray(arr, 4);

    cout << "\nImprimiendo al revez";
    printReverse(arr, 4);

    cout << "\nImprimiendo la suma de los elementos";    
    cout << "la suma es : " << sumArrayElems(arr, 4) << endl;

    return 0;
}