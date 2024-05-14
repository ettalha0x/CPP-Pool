#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array {
	private:
		T* data;
		unsigned int _size;

	public:
		// Default constructor
		Array();

		// Constructor with size parameter
		Array(int n);

		// Copy constructor
		Array(const Array& other);

		// Assignment operator
		Array& operator=(const Array& other);

		// Destructor
		~Array();

		// Subscript operator
		T& operator[](int index);

		// Size function
		unsigned int size() const;
};

#include "Array.tpp"

#endif