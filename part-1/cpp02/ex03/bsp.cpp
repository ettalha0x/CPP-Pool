/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:29:06 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/10 12:50:52 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed calculateArea(Point const a, Point const b, Point const c) {
    Fixed area = ((a.getX() - c.getX()) * (b.getY() - a.getY()) - (a.getX() - b.getX()) * (c.getY() - a.getY())) / 2;
    if (area < 0)
        area = area * -1;
    return area;
}


bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed areaABC = calculateArea(a, b, c);
    Fixed areaPAB = calculateArea(point, a, b);
    Fixed areaPBC = calculateArea(point, b, c);
    Fixed areaPCA = calculateArea(point, c, a);

    return (areaPAB + areaPBC + areaPCA) == areaABC;
}
