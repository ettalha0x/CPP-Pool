/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:47:44 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/18 19:20:49 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 3);

    Point point(1, 1);

    bool isInside = bsp(a, b, c, point);

    std::cout << "Point (" << point.getX() << ", " << point.getY() << ") is ";
    if (isInside) {
        std::cout << "inside the triangle." << std::endl;
    } else {
        std::cout << "outside the triangle." << std::endl;
    }
    return 0;
}