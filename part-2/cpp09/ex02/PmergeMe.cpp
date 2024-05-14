/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:47:02 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/17 16:57:54 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::vector<int> fillvector(int ac, char **av) {
    if (ac == 1)
        throw std::invalid_argument("error: no args");
    std::vector<int> arr;
    char* ch = NULL;
    for (size_t i = 1; i < size_t(ac); i++)
    {
        double val = std::strtod(av[i], &ch);
        if (*ch != '\0')
            throw std::invalid_argument("error: invalid arguments");
        if (val - static_cast<int>(val))
            throw std::invalid_argument("error: not an integer");
        if (val < 0)
            throw std::out_of_range("error: not a positive integer");
        arr.push_back(val);
    }
    return arr;
}

std::list<int> fill_list(int ac, char **av) {
    std::list<int> arr;
    char* ch = NULL;
    for (size_t i = 1; i < size_t(ac); i++)
    {
        double val = std::strtod(av[i], &ch);
        if (*ch != '\0')
            throw std::invalid_argument("error: invalid arguments");
        if (val - static_cast<int>(val))
            throw std::invalid_argument("error: not an integer");
        if (val < 0)
            throw std::out_of_range("error: not a positive integer");
        arr.push_back(val);
    }
    return arr;
}