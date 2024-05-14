/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/13 20:24:57 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
#define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    std::string name;
public:
    WrongCat();
    WrongCat(const WrongCat &cpy);
    WrongCat& operator=(const WrongCat &src);
    virtual ~WrongCat();
    void makeSound(void) const;
};


#endif