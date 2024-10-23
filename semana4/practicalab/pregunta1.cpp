#include <iostream>
using namespace std;

int main() {
    long sum{0};
    for(int i{2}; i < 1000000; i++) {
        if(i%3 == 0 or i%5==0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}