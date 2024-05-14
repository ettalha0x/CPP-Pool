/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:37:24 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:56:24 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int  main()
{
    {
        Intern  Intern;
        AForm*   rrf;

        rrf = Intern.makeForm("robotomy request", "Bender");
        if (rrf)
        {
            std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;               
            delete rrf;
        }
    }

    // std::cout << "-------- shrubbery Creation form --------" << std::endl;
    // Bureaucrat b1("Bureaucrat 1", 137);
    // ShrubberyCreationForm sh("shrubbery creation");
    // b1.signForm(sh);
    // b1.executeForm(sh);
    // std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;
    
    // std::cout << "-------- Robotomy Request form --------" << std::endl;
    // Bureaucrat b2("Bureaucrat 2", 45);
    // RobotomyRequestForm rb("robotomy request");
    // b2.signForm(rb);
    // b2.executeForm(rb);
    // std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;
    
    // std::cout << "-------- PresidentialPardon form --------" << std::endl;
    // Bureaucrat b3("Bureaucrat 3", 5);
    // PresidentialPardonForm pr("presidential pardon");
    // b3.signForm(pr);
    // b3.executeForm(pr);
    // std::cout << "-------- -------- -------- -------- --------" << std::endl << std::endl << std::endl;
}