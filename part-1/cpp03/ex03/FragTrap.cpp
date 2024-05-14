/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:59:14 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:31:32 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap() :ClapTrap()
{
    std::cout << "FragTrap Default Constructor called" << std::endl;
    this->Hit = 100;
    this->Energy = 200;
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

void  FragTrap::print(void)
{
    using namespace std;
    // cout << "name:"<< name << endl;
    // cout << "Hit:"<< this->Hit << endl;
    cout << "Energy:"<< this->Energy << endl;
    
}

