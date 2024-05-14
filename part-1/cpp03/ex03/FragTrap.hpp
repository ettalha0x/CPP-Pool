/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 09:57:43 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/04 12:05:36 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :  virtual public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(std::string name);
    ~FragTrap();

   void highFivesGuys(void);
   void  print(void);
};

#endif