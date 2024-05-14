/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:55:23 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/05 09:57:10 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        Ice(const Ice &cpy);
        ~Ice();

        Ice&   operator=(const Ice &src);

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);
};


#endif