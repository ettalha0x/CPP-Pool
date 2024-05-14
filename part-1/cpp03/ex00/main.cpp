/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:40:09 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/12 12:13:02 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap c1("Ettalha");
    ClapTrap c2("Projects");
 
    c1.attack(c2.getName());
    c2.takeDamage(1);
    c2.beRepaired(1);
    
    return 0;
}