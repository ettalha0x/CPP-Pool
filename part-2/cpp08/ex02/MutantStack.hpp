/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:49:37 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 11:58:31 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator reverse_iterator;
    typedef typename Container::const_iterator const_iterator;
    typedef typename Container::const_reverse_iterator const_reverse_iterator;

    MutantStack() :std::stack<T>() {};
    
    MutantStack(MutantStack const &copy) :std::stack<T>(copy){
    };

    MutantStack& operator=(MutantStack const &other) {
        std::stack<T>::operator=(other);
        return *this;
    };

    ~MutantStack() {};

    //simple iterators
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }

    //const iterators

    const_iterator cbegin()
    {
        return this->c.cbegin();
    }

    const_iterator cend()
    {
        return this->c.cend();
    }

    //reverse iterators
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }

    reverse_iterator rend()
    {
        return this->c.rend();
    }

    //const reverse iterators
    const_reverse_iterator crbegin()
    {
        return this->c.crbegin();
    }

    const_reverse_iterator crend()
    {
        return this->c.crend();
    }
    
};

#endif