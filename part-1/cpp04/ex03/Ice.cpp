/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:55:26 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/15 11:29:35 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice materia default constructor is called" << std::endl;
}

Ice::Ice(const Ice &cpy) : AMateria("ice")
{
    *this = cpy;
    std::cout << "Ice materia copy constructor is called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Ice materia distructor is called" << std::endl;
}
Ice&   Ice::operator=(const Ice &src) {
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use( ICharacter& target )
{
    std::cout << "* I shoots an ice bolt at " << target.getName() << "*" << std::endl;
}