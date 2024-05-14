/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:56:14 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/20 09:56:18 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap c1("Ettalha");
    FragTrap c2("Projects");
 
    c1.attack(c2.getName());
    c2.takeDamage(1);
    c2.beRepaired(1);
    c1.highFivesGuys();
    
    return 0;
}