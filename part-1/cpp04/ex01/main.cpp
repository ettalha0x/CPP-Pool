/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 19:58:38 by nettalha          #+#    #+#             */
/*   Updated: 2023/08/05 10:00:12 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animals[] =
    {
        new Dog(),
        new Dog(),
        new Cat(),
        new Cat(),
    };
    for (int i = 0; i < 4; i++)
    {
       animals[i]->makeSound();
    }
    for (int i = 0; i < 4; i++)
    {
        delete animals[i];
    }

}

