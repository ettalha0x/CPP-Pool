/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:39:59 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/14 21:42:32 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
    
    if (ac < 2) {
        std::cout << "Usage: ./btc <filename>" << std::endl;
        return 1;
    }
    BitcoinExchange b1("data.csv");
    b1.ProcessInput(av[1]);
    return 0;
}
