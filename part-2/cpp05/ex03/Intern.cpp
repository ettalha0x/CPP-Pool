/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:44:02 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:55:32 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::Intern( const Intern& src ) {
    std::cout << "Intern Copy constructor called" << std::endl;
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=( const Intern& rhs ) {
    std::cout << "Intern Assignation operator called" << std::endl;
    ( void ) rhs;
    return (*this);
}

AForm* Intern::makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}
AForm* Intern::makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}
AForm* Intern::makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    AForm* (Intern::*formFunctions[3])(std::string) = {&Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm, &Intern::makePresidentialPardonForm};

    for (size_t i = 0; i < 3; i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*formFunctions[i])(target);
        }
    }
    std::cout << "Intern cannot create form with name: " << name << std::endl;
    return NULL;
}

