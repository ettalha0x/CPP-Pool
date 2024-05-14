/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:24:16 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/04 11:23:42 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

int main(int ac, char** av) {
        
    if (ac != 2) {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }
    RPN rpn;
    bool result = rpn.calculate(av[1]);
    
    return result;
}