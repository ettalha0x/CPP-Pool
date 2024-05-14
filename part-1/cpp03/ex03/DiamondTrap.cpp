/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:59:43 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:37:20 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    FragTrap::Energy = 0;
    FragTrap::print();
    this->print();
    std::cout << name << " DiamondTrap Default Constructor called" << std::endl;
    Energy = 500;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    FragTrap::Hit = 100;
    ScavTrap::Energy = 50;
    FragTrap::Attack = 30;
    std::cout << name << " DiamondTrap paramettraized Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << name << " DiamondTrap Distructor called" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I'm a DiamondTrap named "<< name << " and  ClapTrap name " << ClapTrap::name << std::endl;
}

void  DiamondTrap::print(void)
{
    using namespace std;
    // cout << "name:"<< name << endl;
    // cout << "Hit:"<< this->Hit << endl;
    cout << "Energy:"<< this->Energy << endl;
    
}