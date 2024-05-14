/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:08:12 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/04 12:12:12 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <cctype>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"
using namespace std;
int is_alldigit(std::string s)
{
    int i = 0;
    while (s[i])
    {
       if (!std::isdigit(s[i]))
            return 0;
        i++;
    }
    return 1;
}

int	main(int ac, char **av)
{
    (void)ac;
    (void)av;
    std::string  cmd;
    std::string  in_index;
    int         index;
    PhoneBook   Mybook;

    Mybook.index = 0;
    while (true)
    {
        std::cout << "\033[1;34mEnter command: \033[0m" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
        if (cmd == "ADD")
        {
            if (Mybook.index >= 8)
                Mybook.index = 0;
            Mybook.addContact();
            Mybook.index++;
        }
        else if (cmd == "SEARCH")
        {
            Mybook.displayALLContacts();
            while (1)
            {
                std::cout << "\033[1;34mEnetr contact index: \033[0m" << endl;
                std::getline(std::cin, in_index);
                if (std::cin.eof())
                    exit(EXIT_FAILURE);
                if (is_alldigit(in_index))
                {
                    index = std::stoi(in_index);
                    if (index >= 0 && index < 8)
                    {
                        Mybook.searchContact(index);
                        break;
                    }
                    else
                        std::cout << "\033[0;31mInvalid index\033[0m" << std::endl;
                }
                else
                        std::cout << "\033[0;31mindex must be a number\033[0m" << std::endl;
            }
        }
        else if (cmd == "EXIT")
            break;
        else
            std::cout << "\033[0;31minput discarded\033[0m" << std::endl;
    }
	return 0;
}

