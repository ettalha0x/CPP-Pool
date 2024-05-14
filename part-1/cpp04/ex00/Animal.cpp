/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:44 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/14 16:53:25 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal() : type("Animal")
{
    std::cout << getType() << " default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal " << getType() << " parametraized constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal distructor called" << std::endl;
}

Animal::Animal(const Animal &cpy)
{
    *this = cpy;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
    if(this != &src)
        this->type = src.type;
    return *this;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
    std::cout << "Animal Sound" << std::endl;
}