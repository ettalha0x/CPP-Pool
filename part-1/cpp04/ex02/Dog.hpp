/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/13 20:24:57 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    std::string name;
    Brain *brain;
public:
    Dog();
    Dog(const Dog &cpy);
    Dog& operator=(const Dog &src);
    virtual ~Dog();
    void makeSound(void) const;
};


#endif