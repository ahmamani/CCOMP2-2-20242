#include <iostream>

int potencia(int, int);

int main() {
    int n = potencia(3, 4);
    std::cout << "3^4: " << n << std::endl;
    n = potencia(5, 2);
    std::cout << "5^2: " << n << std::endl;

    return 0;
}

int potencia(int base, int exp) {
    int result{1};
    for(int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}