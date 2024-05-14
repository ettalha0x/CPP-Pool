 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:27:47 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/02 10:49:02 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << getType() << " default constructor called" << std::endl;
}

Dog::Dog(const Dog &cpy)
{
    *this = cpy;
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
    if(this != &src)
    {
        this->type = src.type;
        this->name = src.name;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << getType() << " distructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "Woof" << std::endl;
}