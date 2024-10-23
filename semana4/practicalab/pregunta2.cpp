#include <iostream>
using namespace std;

int main() {
    long n{0};
    cout << "Ingrese un numero: ";
    cin >> n;
    int i{1};
    while(i <= n) {
        if(i%2 != 0){
            cout << i << ", ";
        }
        i++;
    }
    if(i == n)
        cout << i << endl;
    return 0;
}