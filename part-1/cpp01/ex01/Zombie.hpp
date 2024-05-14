/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:38:51 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/05 15:13:03 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);
        void    setName( std::string name );
        void    announce( void );

};

Zombie* zombieHorde( int N, std::string name );

#endif

