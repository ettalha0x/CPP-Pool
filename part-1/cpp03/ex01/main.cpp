/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:24:57 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/19 11:25:15 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap c1("Ettalha");
    ScavTrap c2("Projects");
 
    c1.attack(c2.getName());
    c2.takeDamage(1);
    c2.beRepaired(1);
    
    return 0;
}