/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:08:29 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/04 12:11:44 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
public:
	Contact	contacts[8];
	int		index;

	void addContact()
	{
		contacts[index].index = index;
		std::string	s;
		std::cout << "\033[33m---------------Add new Contact:-------------------------\033[0m" << std::endl;
		std::cout << "First Name: ";
		std::getline(std::cin, s);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
		contacts[index].setFirstName(s);
		std::cout << "Last Name: ";
		std::getline(std::cin, s);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
		contacts[index].setLastName(s);
		std::cout << "Nick Name: ";
		std::getline(std::cin, s);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
		contacts[index].setNickName(s);
		std::cout << "Phone Number: ";
		std::getline(std::cin, s);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
		contacts[index].setPhoneNumber(s);
		std::cout << "Darkest Sucrete: ";
		std::getline(std::cin, s);
        if (std::cin.eof())
            exit(EXIT_FAILURE);
		contacts[index].setDarkestSecret(s);
		std::cout << "\033[32m---------------Contact added successfully.--------------\033[0m" << std::endl;
	}
	
	void displayALLContacts()
	{
		std::cout << "\033[33m-----------------------All contacts.--------------------\033[0m" << std::endl;
		std::cout << "\033[35m|     Index     ";
		std::cout << "| First Name | ";
		std::cout << "Last Name  | ";
		std::cout << "NickName   |\033[0m" << std::endl;
		int i = 0;
		while (!contacts[i].index.empty())
		{
			std::cout << "|       " << std::setw(7) << std::left << i << " ";
			std::cout << "| " << std::setw(10) << std::left << truncateString(contacts[i].firstName, 10) << " |";
			std::cout << " " << std::setw(10) << std::left << truncateString(contacts[i].lastName, 10) << " |";
			std::cout << " " << std::setw(10) << std::left << truncateString(contacts[i].nickName, 10) << " |" << std::endl;
			i++;
		}
	}

	void searchContact(int i)
	{
		std::cout << "Index: " << i << std::endl;
		contacts[i].displayContactByIndex();
	}
	
	std::string truncateString(const std::string& text, int width)
	{
		if (text.length() > static_cast<std::string::size_type>(width))
			return text.substr(0, width - 1) + ".";
		else
			return text;
	}
};

#endif
