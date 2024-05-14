/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:20:40 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 18:14:54 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
    std::cout << name << " destroyed" << std::endl;
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}
