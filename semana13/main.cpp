#include <iostream>
#include "DynamicArray.h"
using namespace std;

int main() {
    DynamicArray da1;

    int arr[] = {1,2,3,4,5,6};
    DynamicArray da2{arr, 6};

    DynamicArray da3{da2};

    cout << da2 << endl;
    /*da2.push_back(100);
    cout << da2 << endl;

    da2.insert(500, 2);
    cout << da2 << endl;

    da2.insert(1000, da2.getSize()-1);
    cout << da2 << endl;

    da2.remove(2);
    cout << da2 << endl;*/

    if(true) {
        DynamicArray da4;
        da4 = da2;
    }
    cout << da2 << endl;
}