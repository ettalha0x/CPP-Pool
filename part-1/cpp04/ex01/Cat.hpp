/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/13 20:24:57 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
#define Cat_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    std::string name;
    Brain *brain;
public:
    Cat();
    Cat(const Cat &cpy);
    Cat& operator=(const Cat &src);
    virtual ~Cat();
    void makeSound(void) const;
};


#endif