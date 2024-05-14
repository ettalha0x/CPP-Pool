/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:58:39 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/07 18:02:03 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(void)
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    Harl harly;
    int i = 0;

    while (i < 4)
    {
        harly.complain(levels[i]);
        i++;
    }

    return 0;
}
