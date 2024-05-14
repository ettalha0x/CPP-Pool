/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:44 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/14 11:44:34 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << getType() << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "WrongAnimal " << getType() << " parametraized constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal distructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
    *this = cpy;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
    if(this != &src)
        this->type = src.type;
    return *this;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal Sound" << std::endl;
}