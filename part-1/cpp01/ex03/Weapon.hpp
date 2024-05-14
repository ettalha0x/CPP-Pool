/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:20:38 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/05 23:29:54 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>

class Weapon
{
    private:
        std::string type;
        
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        
        std::string getType();
        void        setType(std::string type);
};

#endif
