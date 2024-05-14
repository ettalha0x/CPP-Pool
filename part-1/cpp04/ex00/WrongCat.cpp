/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:27:47 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/14 11:46:12 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << getType() << " default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy)
{
    *this = cpy;
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    if(this != &src)
    {
        this->type = src.type;
        this->name = src.name;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << getType() << " distructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}