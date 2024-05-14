/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:45:19 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/15 11:21:55 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : type("")
{
    std::cout << "AMateria default constructor is called" << std::endl;
}

AMateria::AMateria(const std::string &type)  : type(type)
{
    std::cout << "AMateria " << this->type << " parametraized constructor is called" << std::endl;
}

AMateria::AMateria(const AMateria &cpy)
{
    *this = cpy;
}

AMateria::~AMateria( void )
{
    std::cout << "AMateria " << this->type << " destructor called" << std::endl;
}

const std::string& AMateria::getType() const
{
    return this->type;
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}