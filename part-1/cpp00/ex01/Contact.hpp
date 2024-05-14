/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:08:24 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/04 12:06:58 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact
{
private:
    std::string index;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
public:
    void setFirstName(std::string firstName) {this->firstName = firstName;}
    void setLastName(std::string lastName) {this->lastName = lastName;}
    void setNickName(std::string nickName) {this->nickName = nickName;}
    void setPhoneNumber(std::string phoneNumber) {this->phoneNumber = phoneNumber;}
    void setDarkestSecret(std::string darkestSecret) {this->darkestSecret = darkestSecret;}
    void displayContactByIndex()
    {
        std::cout << "First Name: " << firstName << std::endl;
        std::cout << "Last Name: " << lastName << std::endl;
        std::cout << "NickName: " << nickName << std::endl;
        std::cout << "Phone number: " << phoneNumber << std::endl;
        std::cout << "Darkest Secret: " << darkestSecret << std::endl;
    }
    friend class PhoneBook;
};

#endif
