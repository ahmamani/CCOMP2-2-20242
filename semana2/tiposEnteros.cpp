#include <iostream>

using namespace std;

int main() {
    /*
        short
        long
        long long
    */
    short s;
    long l;
    int i;
    long long ll;

    cout << sizeof(s) << " bytes." << endl;
    cout << sizeof(i) << " bytes." << endl;
    cout << sizeof(l) << " bytes." << endl;
    cout << sizeof(ll) << " bytes." << endl;
    
    return 0;
}