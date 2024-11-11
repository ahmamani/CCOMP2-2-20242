#ifndef __PUNTO_H__
#define __PUNTO_H__

#include <iostream>

class Punto {
    private:
        int x, y;

    public:
        Punto(int _x = 0, int _y = 0) : x{_x}, y{_y} {}
        
        Punto(const Punto &o) {
            x = o.x;
            y = o.y;
        }

        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        } 
        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }

        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

};

#endif