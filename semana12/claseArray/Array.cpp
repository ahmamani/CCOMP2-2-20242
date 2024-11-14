#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h"
using namespace std;

Array::Array(int arraySize) 
        : size(arraySize > 0 ? static_cast<size_t>(arraySize) :
            throw invalid_argument{"Array size must be greater than 0"}),
        ptr{new int[size]}{
}

Array::Array(const Array& arrayToCopy) 
        : size{arrayToCopy.size}, ptr{new int[size]} {
    for(size_t i{0}; i < size; i++) {
        ptr[i] = arrayToCopy.ptr[i];
    }
}

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const {
    return size;
}

const Array& Array::operator=(const Array& right) {
    if(&right != this) {
        if(size != right.size) {
            delete[] ptr;
            size = right.size;
            ptr = new int[size];
        }
        for(size_t i{0}; i < size; i++) {
            ptr[i] = right.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array& right) const {
    if(size != right.size) {
        return false;
    }
    for(size_t i{0}; i < size; ++i) {
        if(ptr[i] != right.ptr[i]) {
            return false;
        }
    }
    return true;
}

int& Array::operator[](int subscript) {
    if(subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}

int Array::operator[](int subscript) const {
    if(subscript < 0 || subscript >= size) {
        throw out_of_range{"Subscript out of range"};
    }
    return ptr[subscript];
}

istream& operator>>(istream& input, Array& a) {
    for(size_t i{0}; i < a.size; ++i) {
        input >> a.ptr[i];
    }
    return input;
}

ostream& operator<<(ostream& output, const Array& a) {
    output << "[ ";
    for(size_t i{0}; i < a.size; ++i) {
        output << a.ptr[i] << " ";
    }
    output <<"]" << endl;
    return output;
}