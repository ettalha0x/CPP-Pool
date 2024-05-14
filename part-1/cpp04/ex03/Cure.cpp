/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:55:19 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/15 10:13:16 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure materia default constructor is called" << std::endl;
}

Cure::Cure(const Cure &cpy) : AMateria("cure")
{
    *this = cpy;
    std::cout << "Cure materia copy constructor is called" << std::endl;
}
Cure::~Cure()
{
    std::cout << "Cure materia distructor is called" << std::endl;
}
Cure&   Cure::operator=(const Cure &src)
{
    if (this != &src)
    {
        this->type = src.type;
    }
    return *this;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}