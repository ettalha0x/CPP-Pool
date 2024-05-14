/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:58:03 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:05:29 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :  virtual public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

    void attack(std::string const &target);
    void guardGate();
    void  print(void);
};

#endif
