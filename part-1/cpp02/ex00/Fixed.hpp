/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:35:51 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 15:05:02 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int  fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &cpy);
        ~Fixed();
        
        Fixed   &operator=(const Fixed &cpy);
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
};


#endif