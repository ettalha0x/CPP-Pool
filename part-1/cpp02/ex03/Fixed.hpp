/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:56:05 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 15:05:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int  fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        Fixed(const int value);
        Fixed(const float value);
        ~Fixed();
        
        Fixed   &operator=(const Fixed &cpy);
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        
        float   toFloat( void ) const;
        int     toInt( void ) const;
        
        bool    operator>( const Fixed &fixed ) const ;
        bool    operator<( const Fixed &fixed ) const ;
        bool    operator>=( const Fixed &fixed ) const ;
        bool    operator<=( const Fixed &fixed ) const ;
        bool    operator==( const Fixed &fixed ) const ;
        bool    operator!=( const Fixed &fixed ) const ;

        Fixed   operator+( const Fixed &fixed ) const ;
        Fixed   operator-( const Fixed &fixed ) const ;
        Fixed   operator*( const Fixed &fixed ) const ;
        Fixed   operator/( const Fixed &fixed ) const ;

        Fixed&  operator++( void );
        Fixed   operator++( int );
        Fixed&  operator--( void );
        Fixed   operator--( int );

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);
double ft_pow(double base, int exponent);


#endif