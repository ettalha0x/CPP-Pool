/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:25:51 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 12:05:09 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_tpp
#define easyfind_tpp


#include "easyfind.hpp"

template <typename T>
int easyfind(T& container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it != container.end())
        return value;
    else
        throw std::out_of_range("Value not found");
}


#endif