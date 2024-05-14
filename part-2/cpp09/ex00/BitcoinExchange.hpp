/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:39:54 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/15 16:04:18 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <map>

class BitcoinExchange
{
    private:
        BitcoinExchange();
        std::map<std::string, double> input;
    public:
        std::map<std::string, double> data;
        BitcoinExchange(std::string const &filename);
        ~BitcoinExchange();
        double      GetExchangeRate(const std::string &date);
        void        ProcessInput(const std::string &filename);
};

std::pair<std::string, double> ft_split(const std::string& str, const char delimiter);
std::map<std::string, double> importData(std::ifstream &filename, const char delimiter);
int     countLines(std::ifstream &file);
bool    checkDate(const std::string& date);
bool    checkValue(const double &value);
