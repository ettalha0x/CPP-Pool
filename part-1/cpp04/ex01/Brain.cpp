/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 17:20:45 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/14 17:31:22 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    std::cout << "Brain default constructor called" << std::endl;
    *this = cpy;
}

Brain::~Brain()
{
    std::cout << "Brain distructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &src)
{
    if (this != &src)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = src.ideas[i];
        }   
    }
    return *this;
}