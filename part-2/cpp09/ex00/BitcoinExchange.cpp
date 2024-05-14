/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 19:39:52 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/15 16:47:46 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(std::string const &filename) {
    std::ifstream dataFile(filename);
    if (!dataFile) {
        std::cout << "Failed to open data file." << std::endl;
        exit(1);
    }
    data = importData(dataFile, ',');
    dataFile.close();
};


BitcoinExchange::~BitcoinExchange() {
};

double BitcoinExchange::GetExchangeRate(const std::string &date) {
	std::map<std::string, double>::iterator it = data.lower_bound(date);
	
	// Case 1: Exact match found
    if (it != data.end() && it->first == date) {
        return it->second;
    }

    // Case 2: No exact match, but there are entries in the map
    if (it != data.begin()) {
        --it;
        return it->second;
    }
	
    // Case 3: No exact match, and no entries in the map
    return -1.0;
}

/***************** help functions *****************/

std::pair<std::string, double> ft_split(const std::string& str, const char delimiter) {
    size_t pos = str.find(delimiter);

    if (pos == std::string::npos) {
        return std::pair<std::string, double>(str, stod(str));
    }

    std::string firstPart = str.substr(0, pos);
    std::string secondPart = str.substr(pos + 1);

    return std::pair<std::string, double>(firstPart, stod(secondPart));
}

int countLines(std::ifstream &file) {
    std::string line;
    int count = 0;
    while (std::getline(file, line)) {
        count++;
    }
    
    return count;
}

std::map<std::string, double> importData(std::ifstream &filename, const char delimiter) {
    std::map<std::string, double> data;
    std::string line;
    bool firstLine = true;
    while (std::getline(filename, line)) {
        if (firstLine) {
            firstLine = false;
            continue;
        }
        data.insert(ft_split(line, delimiter));
    }
    
    return data;
}

bool checkDate(const std::string& date) {
	std::string::size_type del1 = date.find('-');
	std::string::size_type del2 = date.rfind('-');

	if (del1 == std::string::npos || del1 == del2)
		return false;
    unsigned int year, month, day;
	year= atoi(date.substr(0, del1).c_str());
	month = atoi(date.substr(del1 + 1, del2 - del1 - 1).c_str());
	day = atoi(date.substr(del2 + 1).c_str());
    
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return false;

	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30)
			return false;
	}

	if (month == 2) {
		bool isKabisa = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
		if ((isKabisa && day > 29) || (!isKabisa && day > 28)) {
			return false;
		}
	}

	return true;
}

bool checkValue(const double &value) {
	if (value < 0 || value > 1000) {
        std::cerr << "Error: Value " << value
        << " is not a positive number between 0 and 1000.\n";
		return false;
	}
	return true;
}

void BitcoinExchange::ProcessInput(const std::string &filename) {
	std::ifstream file(filename.c_str());
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line)) {
		std::istringstream ss(line);
		std::string date;
		double value;
		char delimiter;

		if (!(ss >> date >> delimiter >> value)) {
			std::cerr << "Error: Unable to parse line => "
				  << line << '\n';
			continue;
		}

		if (delimiter != '|') {
			std::cerr << "Error: Expected '|' delimiter in line => "
				  << line << '\n';
			continue;
		}

		if (!checkDate(date)) {
			std::cerr << "Error: Invalid date format in line => "
				  << line << '\n';
			continue;
		}

		if (!checkValue(value)) {
			continue;
		}

		double exchangeRate = GetExchangeRate(date);
		if (exchangeRate == -1.0) {
			std::cerr << "Error: No exchange rate available for date => "
				  << date << '\n';
			continue;
		}

		std::cout << date << " => "
			  << value << " = " << value * exchangeRate
			  << '\n';
	}
}
