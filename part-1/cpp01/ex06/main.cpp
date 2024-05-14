/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:58:39 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/07 19:19:01 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl harly;
        harly.complain(av[1]);
    }
    else
        std::cout << "Usage: program_name level" << std::endl;
    return 0;
}
