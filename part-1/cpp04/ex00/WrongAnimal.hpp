/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/14 11:52:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
private:

protected:
    std::string type;
    
public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &cpy);
    WrongAnimal& operator=(const WrongAnimal &src);
    virtual ~WrongAnimal();

    std::string getType(void) const;
    void makeSound(void) const;
};


#endif