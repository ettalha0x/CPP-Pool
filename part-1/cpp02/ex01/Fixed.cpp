/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:35:47 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 12:54:44 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    this->value = value * ft_pow(2, fractional_bits);
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 * ft_pow(2, fractional_bits)));
    std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cpy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed   &Fixed::operator=(const Fixed &cpy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = cpy.value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

int Fixed::toInt(void) const
{
    return value / ft_pow(2, fractional_bits);
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(value) / (1 * ft_pow(2, fractional_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return os;
}

double ft_pow(double base, int exponent)
{
    double result = 1.0;

    if (exponent >= 0)
    {
        for (int i = 0; i < exponent; ++i)
        {
            result *= base;
        }
    }
    else
    {
        for (int i = 0; i > exponent; --i)
        {
            result /= base;
        }
    }

    return result;
}