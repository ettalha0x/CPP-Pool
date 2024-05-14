/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:39:01 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/05 15:23:04 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 10;
    Zombie *zombies = zombieHorde(n, "Zombie");
    for (int i = 0; i < n; ++i) {
        zombies[i].announce();
    }
    delete[] zombies;
    return 0;
}