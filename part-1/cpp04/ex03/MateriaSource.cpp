/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:09:12 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 10:00:20 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource distructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (materias[i])
            delete materias[i];
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = cpy;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = src.materias[i];
    }
    return *this;
}

AMateria* MateriaSource::getMateria(const std::string &type)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] && materias[i]->getType() == type)
            return materias[i];
    return NULL;
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (materias[i] == NULL)
        {
            materias[i] = m;
            std::cout << "MateriaSource learned " << m->getType() << std::endl;
            return;
        }
    std::cout << "MateriaSource can't learn " << m->getType() << std::endl;
}

AMateria*   MateriaSource::createMateria(const std::string &type)
{
    for ( int i = 0; i < 4; i++ )
        if ( materias[i] && materias[i]->getType() == type )
            return materias[i]->clone();
    return NULL;
}