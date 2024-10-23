#include <iostream>

using namespace std;

class Integer {
    private:
        int val;
    public:        
        // El constructor es un método que se invoca cuando se 
        // crea una instancia.
        Integer() {
            val = 0;
            cout << "Default contructor is called" << endl;
        }
        int getVal() const {
            return val;
        }
        void setVal(int v) {
            val = v;
        }
};

int main() {
    //Integer i; // Creando una instancia... se está invocando al contructor!!
    Integer arr[3];

    cout << arr[0].getVal() << endl;
    cout << arr[1].getVal() << endl;
    cout << arr[2].getVal() << endl;
}