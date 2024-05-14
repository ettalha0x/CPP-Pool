/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:56:33 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/20 16:34:19 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() :ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->Hit = 100;
    this->Energy = 100;
    this->Attack = 30;
}

FragTrap::FragTrap(std::string name) :ClapTrap(name)
{
    std::cout << name << " FragTrap Parametrazied Constructor called" << std::endl;
    this->Hit = 100;
    this->Energy = 100;
    this->Attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << name << " FragTrap Distructor called" << std::endl;
}


void    FragTrap::highFivesGuys( void ) {
    if ( Energy <= 0 ) {
        std::cout << "FragTrap " << this->name << " is out of energy." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->name << " high fives everybody." << std::endl;
    this->Energy -= 1;
}

