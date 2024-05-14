#include "Array.hpp"

template <typename T>
Array<T>::Array() :data(NULL), _size(0) {}

// Constructor with size parameter
template <typename T>
Array<T>::Array(int n)
{
    if (n <= 0)
        throw std::invalid_argument("Invalid input");
    _size = n;
    data = new T[_size];
}

// Copy constructor
template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
    data = new T[_size];
    for (unsigned int i = 0; i < _size; ++i) {
        data[i] = other.data[i];
    }
}

// Assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] data;

        _size = other._size;
        data = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}


// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] data;
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](int index) {
    if (index >= static_cast<int>(_size) || index < 0) {
        throw std::out_of_range("Index out of bounds");
    }
    return data[index];
}

// Size function
template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}