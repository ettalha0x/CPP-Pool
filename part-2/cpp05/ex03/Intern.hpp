/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:43:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 21:25:07 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern {

public:
    Intern();
    Intern( const Intern& src );
    ~Intern();

    Intern& operator=( const Intern& rhs );

    AForm* makeRobotomyRequestForm(std::string target);
    AForm* makeShrubberyCreationForm(std::string target);
    AForm* makePresidentialPardonForm(std::string target);

    AForm* makeForm( std::string name, std::string target );
};

#endif