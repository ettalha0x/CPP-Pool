/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:55:00 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/20 18:59:30 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :  public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();

   void highFivesGuys(void);
};

#endif