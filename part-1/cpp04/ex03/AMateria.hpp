/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 09:05:01 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/05 09:57:10 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string type;    
public:
    AMateria();
    AMateria(const std::string &type);
    AMateria(const AMateria &cpy);
    virtual ~AMateria();

    const std::string &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};



#endif