/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:59:32 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:29:45 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :ClapTrap()
{
    std::cout << "ScavTrap Default Constructor called" << std::endl;
    this->Hit = 100;
    this->Energy = 300;
    this->Attack = 20;
}

ScavTrap::ScavTrap(std::string name) :ClapTrap(name)
{
    std::cout << name << " ScavTrap Parametrazied Constructor called" << std::endl;
    this->Hit = 100;
    this->Energy = 50;
    this->Attack = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << name << " ScavTrap Distructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (Energy >  0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << ", causing " <<  -1 << " points of damage!" << std::endl;;
        Energy--;
        
    }
    else
       std::cout << "no Energy left to Attack "<< target << std::endl; 
}

void ScavTrap::guardGate()
{
    std::cout << " ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

void  ScavTrap::print(void)
{
    using namespace std;
    // cout << "name:"<< name << endl;
    //  cout << "Hit:"<< this->Hit << endl;
    cout << "Energy:"<< this->Energy << endl;
    
}