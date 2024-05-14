/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:55:57 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 19:07:21 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const int value)
{
    this->value = value * ft_pow(2, fractional_bits);
}

Fixed::Fixed(const float value)
{
   this->value = roundf(value * (1 * ft_pow(2, fractional_bits)));
}

Fixed::Fixed(const Fixed &cpy)
{
    *this = cpy;
}

Fixed::~Fixed()
{
}

Fixed   &Fixed::operator=(const Fixed &cpy)
{
    value = cpy.value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    return value;
}

void Fixed::setRawBits(int const raw)
{
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

//  comparison operators

bool Fixed::operator>(const Fixed &fixed) const
{
    return this->value > fixed.value;
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return this->value < fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return this->value >= fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return this->value <= fixed.value;
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return this->value == fixed.value;
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return this->value != fixed.value;
}

//  arithmetic operators

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed (this->toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed (this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed (this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed (this->toFloat() / fixed.toFloat());
}

//  increment/decrement operators

Fixed&   Fixed::operator++( void ) {
    this->value++;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed tmp( *this );
    this->value++;
    return tmp;
}

Fixed& Fixed::operator--( void ) {
    this->value--;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed tmp( *this );
    this->value--;
    return tmp;
}

// Max and Min

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
    if ( a.value < b.value )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
    if ( a.value < b.value )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
    if ( a.value > b.value )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
    if ( a.value > b.value )
        return a;
    return b;
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