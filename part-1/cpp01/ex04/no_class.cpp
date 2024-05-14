/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:20:36 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 20:31:22 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

void ft_replace(std::string& str, const std::string& oldSubstr, const std::string& newSubstr)
{
    size_t pos = str.find(oldSubstr);
    while (pos != std::string::npos)
    {
        str.erase(pos, oldSubstr.length());
        str.insert(pos, newSubstr);
        pos = str.find(oldSubstr, pos + newSubstr.length());
    }
}

int main(int argc, char** av)
{
    if (argc == 4)
    {
        std::string data;
        std::ifstream infile(av[1]);
        if (infile.is_open())
        {
            std::string data((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
            infile.close();
            std::ofstream outfile("outfile");
            if (outfile.is_open())
            {
                ft_replace(data, av[2], av[3]);
                outfile << data;
                outfile.close();
            }
            else
                std::cout << "Error: Unable to create the output file." << std::endl;
        }
        else
            std::cout << "Error: Unable to open the input file." << std::endl;
    }
    else
        std::cout << "Usage: program_name input_file string_to_replace new_string" << std::endl;
    return 0;
}
