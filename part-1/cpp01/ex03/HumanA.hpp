/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:20:42 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 17:56:19 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon      &weapon;
        
    public:
        HumanA(std::string name,  Weapon &weapon);
        ~HumanA();

        void    attack();
        void    setWeapon(Weapon &Weapon);
};

#endif