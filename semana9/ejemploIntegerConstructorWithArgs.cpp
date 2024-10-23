#include <iostream>

using namespace std;

class Integer {
    private:
        int val;
    public:        
        // El constructor es un método que se invoca cuando se 
        // crea una instancia.
        Integer(int v) {
            val = v;
            cout << "Constructor with args is called: " << val << endl;
        }
        int getVal() const {
            return val;
        }
        void setVal(int v) {
            val = v;
        }
};

int main() {
    Integer i{3}; // Creando una instancia... se está invocando al contructor!!    

    Integer arr[3];
}