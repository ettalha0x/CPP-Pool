/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:24:35 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/20 18:59:52 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :  public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(std::string const &target);
    void guardGate();
};

#endif
