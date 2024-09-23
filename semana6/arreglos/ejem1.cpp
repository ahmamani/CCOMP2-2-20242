#include <iostream>

using namespace std;

int main() {
    int arr[4];
    cout << "Ingrese 4 valores enteros: "<< endl;

    for(int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Los valores en el arreglo son: ";
    for(int i = 0; i < 4; i++) {
        cout << " " << arr[i];
    }

    cout << "\nImprimiendo al revez";
    for(int i = 3; i >= 0; i--) {
        cout << " " << arr[i];
    }

    return 0;
}