/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:24:47 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/19 11:25:41 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int Hit;
    int Energy;
    int Attack;
    ClapTrap();
public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap &copy);
    std::string getName();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif