#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
    private:
        int x;
        int y;
    public:
        Point(int _x = 0, int _y = 0): x{_x}, y{_y} {
            std::cout << "Constructor" << std::endl;            
        }
        int getX() const {
            return x;
        }
        int getY() const {
            return y;
        }
        void setX(int x) {
            this->x = x;
        }
        void setY(int y) {
            this->y = y;
        }
        void print() const {
            std::cout << "(" << x << ", " << y << ")" << std::endl;
        }

        ~Point() {
            std::cout << "Destructor" << std::endl;
        }
};

#endif