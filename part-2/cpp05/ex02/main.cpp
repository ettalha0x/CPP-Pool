/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:37:24 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 20:43:40 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main( void )
{

    std::cout << "-------- shrubbery form --------" << std::endl;
    Bureaucrat b1("Bureaucrat 1", 137);
    ShrubberyCreationForm sh("shrubbery form");
    b1.signForm(sh);
    b1.executeForm(sh);
    std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;
    
    std::cout << "-------- RobotomyRequest Form --------" << std::endl;
    Bureaucrat b2("Bureaucrat 2", 45);
    RobotomyRequestForm rb("RobotomyRequest form");
    b2.signForm(rb);
    b2.executeForm(rb);
    std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;
    
    std::cout << "-------- PresidentialPardon form --------" << std::endl;
    Bureaucrat b3("Bureaucrat 3", 5);
    PresidentialPardonForm pr("PresidentialPardon form");
    b3.signForm(pr);
    b3.executeForm(pr);
    std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;

    return 0;
}