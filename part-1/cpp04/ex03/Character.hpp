/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 10:16:19 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/05 09:57:10 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character : public ICharacter
{

private:
    std::string name;
    AMateria    *inventory[4];

public:
    Character(std::string const &name);
    Character(Character const &cpy);
    ~Character();

    Character&          operator=(Character const &src);

    const std::string        &getName() const;
    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);
};

#endif