/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mysed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:23:12 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/06 22:41:26 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mysed.hpp"

mysed::mysed(std::string filename, std::string s1, std::string s2)
{
    this->filename = filename;
    this->s1 = s1;
    this->s2 = s2;
}

mysed::~mysed()
{
     std::cout << "instace destroyed" << std::endl;
}

void mysed::ft_read(std::string filename)
{
    std::ifstream infile(filename);
    if (infile.is_open())
    {
        data = std::string((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
        infile.close();
    }
    else
        std::cout << "Error: Unable to open the input file." << std::endl;
}

void mysed::ft_replace(std::string& data, const std::string& s1, const std::string& s2)
{
    size_t pos = data.find(s1);
    while (pos != std::string::npos)
    {
        data.erase(pos, s1.length());
        data.insert(pos, s2);
        pos = data.find(s1, pos + s2.length());
    }
}

void mysed::ft_write(std::string filename)
{
    std::ofstream outfile(filename);
    if (outfile.is_open())
    {
        ft_replace(data, s1, s2);
        outfile << data;
        outfile.close();
    }
    else
        std::cout << "Error: Unable to create the output file." << std::endl;
}

