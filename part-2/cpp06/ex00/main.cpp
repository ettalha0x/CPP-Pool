/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:50:06 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/14 22:08:11 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2 || (argv[1][0] == '\0')) {
        std::cerr << "Usage: " << argv[0] << " <input_string>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    ScalarConverter::convert(input);

    return 0;
}