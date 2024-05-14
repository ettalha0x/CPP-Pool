/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:06 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/15 11:11:40 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {

    Data* ptr = new Data;

    ptr->key = "School";
    ptr->value = 1337;

    std::cout << "Size of: " << sizeof(ptr) << std::endl;
    std::cout << "Deserialized: " << ptr << std::endl;
    
    uintptr_t serialized = Serializer::serialize(ptr);
    std::cout << "Serialized: " << serialized << std::endl;
    ptr = Serializer::deserialize(serialized);
    std::cout << "Deserialized: " << ptr << std::endl;

    delete ptr;
}