/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:49:27 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 15:06:05 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
private:
   const Fixed x;
   const Fixed y;
public:
    Point();
    Point(const float xx, const float yy);
    Point(const Point &cpy);
    Point   &operator=(const Point &cpy);
    Fixed getX() const;
    Fixed getY() const;
    ~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif