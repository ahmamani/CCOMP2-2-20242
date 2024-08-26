#include <iostream>

using namespace std;

int main() {
    /**
     * Una variable de tipo char tiene un tamaño de 1 bytes.
    */
    char c = '0';
    int val = static_cast<int>(c);

    cout << c << endl;
    cout << val << endl;
    
    return 0;
}