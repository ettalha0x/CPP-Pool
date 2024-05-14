/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:07:12 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 12:07:13 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span() {
    _size = values.max_size();
}

Span::Span(unsigned int size) :_size(size){}

Span::Span(Span const &copy) {
    *this = copy;
}

Span&   Span::operator=(Span const &other) {
    if (this != &other)
    {
        _size = other._size;
        values = other.values;
    }
    return *this;
}

Span::~Span() {}

void    Span::addNumber(int number) {
    if(values.size() < (size_t)_size)
        values.push_back(number);
    else
        throw std::out_of_range("span is full");
}

int Span::shortestSpan() {
    if (values.size() < 2)
        throw std::out_of_range("Span is empty or have only 1 element");
    
    std::vector<int> tmp = values;
    std::sort(tmp.begin(), tmp.end());

    int shortestSpan = INT_MAX;
    for (int i = 0; i < (int)(tmp.size() - 1); i++) {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < shortestSpan)
            shortestSpan = diff;
    }
    return shortestSpan;
}

int Span::longestSpan() {
    if (values.size() < 2)
        throw std::out_of_range("Span is empty or have only 1 element");
    std::vector<int> tmp = values;
    std::sort(tmp.begin(), tmp.end());
    return tmp[tmp.size() - 1] - tmp[0];
}

size_t    Span::getSize() {
    return values.size();
}
size_t    Span::getValue(size_t i) {
    return values[i];
}