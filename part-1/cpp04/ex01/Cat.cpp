/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 20:27:47 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 19:57:28 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    this->brain = new Brain();
    std::cout << getType() << " default constructor called" << std::endl;
}
Cat::Cat(const Cat &cpy)
{
    *this = cpy;
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
    if(this != &src)
    {
        this->type = src.type;
        this->name = src.name;
        this->brain = new Brain(*src.brain);
    }
    return *this;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << getType() << " distructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}