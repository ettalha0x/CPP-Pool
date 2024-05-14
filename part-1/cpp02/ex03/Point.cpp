/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:49:35 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/10 12:21:48 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0)
{
   
}

Point::Point(const float xx, const float yy) :x(xx) , y(yy)
{
   
}
Point::Point(const Point &cpy) : x(cpy.x), y(cpy.y)
{
    
}

Point& Point::operator=(const Point&)
{
    return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const 
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
