/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:20:36 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 22:40:27 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

int main(int argc, char** av)
{
    if (argc == 4)
    {
        mysed sedv2(av[1], av[2], av[3]);
        sedv2.ft_read(av[1]);
        sedv2.ft_write("outfile");
    }
    else
        std::cout << "Usage: program_name input_file string_to_replace new_string" << std::endl;
    return 0;
}
