/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:26:23 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 10:42:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
    std::list<int> numbers;
    // srand (time(NULL));

    for (size_t i = 0; i < 10; i++) {
        numbers.push_back(i + 13);
        // std::cout << numbers[i] << std::endl;
    }
    try {
        int value = easyfind(numbers, 15);
        std::cout << "element " << value << " was found " << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}