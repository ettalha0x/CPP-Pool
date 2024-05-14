/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:07:22 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 12:07:23 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef span_hpp
#define span_hpp

#include<iostream>
#include <vector>

class Span
{
    private:
        unsigned int _size;
        std::vector<int> values;
    public:
        Span();
        Span(unsigned int _size);
        Span(Span const &copy);
        Span& operator=(Span const &other);
        ~Span();
        void    addNumber(int n);
        int     shortestSpan();
        int     longestSpan();
        template <typename rang>
        void addRange(rang begin, rang end) {
            size_t rangeSize = std::distance(begin, end);
            if (values.size() + rangeSize <= static_cast<size_t>(_size))
                values.insert(values.end(), begin, end);
            else
                throw std::out_of_range("Space not enough for the range");
        }
        size_t      getSize();
        size_t      getValue(size_t i);
};
#endif