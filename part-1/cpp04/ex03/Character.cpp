/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:17:33 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/15 11:13:33 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

#include "Character.hpp"

Character::Character(const std::string  &name) : name(name)
{
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = NULL;
    }
    std::cout << "Character " << this->name << " parametrized constructor called" << std::endl;
}

Character::Character(const Character &cpy) : name(cpy.name)
{
    *this = cpy;
    std::cout << "Character " << this->name << " copy constructor called" << std::endl;
}

Character& Character::operator=(const Character &src)
{
    if (this != &src)
    {
        this->name = src.name;
        for (int i = 0; i < 4; i++)
            this->inventory[i] = src.inventory[i];
    }
    return *this;
}

Character::~Character()
{
    std::cout << "Character " << this->name << " destructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->inventory[i])
            delete this->inventory[i];
}

void    Character::equip( AMateria* m)
{
    for (int i = 0; i < 4; i++)
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout << "Character " << this->name << " equipped with " << m->getType() << std::endl;
            return;
        }
    std::cout << "Character " << this->name << " can't equip " << m->getType() << std::endl;
}

void    Character::unequip(int idx)
{
    if (this->inventory[idx])
    {
        delete this->inventory[idx];
        this->inventory[idx] = NULL;
        std::cout << "Character " << this->name << " unequipped" << std::endl;
    }
    else
        std::cout << "Character " << this->name << " can't unequip" << std::endl;
}

void    Character::use(int idx, ICharacter &target)
{
    if (this->inventory[idx])
    {
        this->inventory[idx]->use(target);
        std::cout << "Character " << this->name << " uses " << this->inventory[idx]->getType() << std::endl;
    }
    else
        std::cout << "Character " << this->name << " can't use" << std::endl;
}

std::string const& Character::getName() const
{
    return this->name;
}