#include <iostream>
#include <array>

using namespace std;

/* Duplique los valores */
void duplicateElems(array<int, 9> &arr) {
    for(int &i : arr) {
        i *= 2;
    }
}
/* Funcion que imprima los elementos */
void printArray(array<int, 9> arr) {
    cout << "[ ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << "]" << endl;
}

int main() {
    array<int, 9> arr{1,2,3,4,5,6,7,8,9};    
    duplicateElems(arr);
    printArray(arr);
    return 0;
} 