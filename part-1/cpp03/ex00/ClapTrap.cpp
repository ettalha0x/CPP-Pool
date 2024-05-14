/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:19:02 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/20 15:44:08 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
    this->Hit = 10;
    this->Energy = 10;
    this->Attack = 10;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << name << " ClapTrap Parametrazied Constructor called" << std::endl;
    this->name = name;
    this->Hit = 10;
    this->Energy = 10;
    this->Attack = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    this->name = copy.name;
    this->Hit = copy.Hit;
    this->Energy = copy.Energy;
    this->Attack = copy.Attack;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " ClapTrap Distructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap operator overload called" << std::endl;
    this->name = copy.name;
    this->Hit = copy.Hit;
    this->Energy = copy.Energy;
    this->Attack = copy.Attack;
    return *this;
}

std::string ClapTrap::getName()
{
    return name;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy >  0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " <<  -1 << " points of damage!" << std::endl;;
        Energy--;
        
    }
    else
       std::cout << "no Energy left to Attack "<< target << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit <= (int)amount)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        Hit -= amount;
        return ;
    }
    std::cout <<  name << " take damage and lose " << amount << " points" << std::endl;
    Hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy >  0)
    {
        std::cout << "ClapTrap " << name << " repairs itself and get back" << amount << " points" << std::endl;;
        Hit += amount;
        Energy -= 1;
    }
    else
        std::cout << "no Energy left to repaire yourself" << std::endl;
}