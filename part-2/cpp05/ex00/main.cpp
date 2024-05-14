/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:44:08 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:39:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat *b1 = new Bureaucrat("b1", 1);
    std::cout << *b1 << std::endl;
    Bureaucrat *b2 = new Bureaucrat("b2", 150);
    std::cout << *b2 << std::endl;

    // try
    // {
    //     b1->incrementGrade();
    //     std::cout << *b1 << std::endl;
    // }
    // catch(const Bureaucrat::GradeTooHighException& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // try
    // {
    //     b2->decrementGrade();
    //     std::cout << *b1 << std::endl;
    // }
    // catch(const Bureaucrat::GradeTooLowException& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    try
    {
        Bureaucrat *b3 = new Bureaucrat("b3", 0);
        std::cout << *b3 << std::endl;
        delete b3;
    }
    catch(const Bureaucrat::GradeTooHighException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    delete b1;
    delete b2;
    return 0;
}