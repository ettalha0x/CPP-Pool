/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:58:56 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:37:35 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    FragTrap *d = new FragTrap();
    d->print();
    d = new DiamondTrap();
    d->print();
    // DiamondTrap d1("Ettalha");
    // DiamondTrap d2("Projects");
    // DiamondTrap d3(d2);
    // DiamondTrap d4("");
 
    // d1.whoAmI();
    // d2.whoAmI();
    // d4 = d3;
    // d1.attack("CPP Modules");
    // d2.takeDamage(1);
    // d2.beRepaired(1);
    // d3.highFivesGuys();
    
    return 0;
}
