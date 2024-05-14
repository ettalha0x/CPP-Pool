/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:03:41 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 18:30:48 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm( "PresidentialPardonForm", 0, 25, 5 ), _target( target ) {
    std::cout << "PresidentialPardonForm Parametrized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm( src ), _target( src._target ) {
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    std::cout << "PresidentialPardonForm assignement operator called" << std::endl;
    (void)rhs;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return this->_target;
}

void PresidentialPardonForm::setTarget(std::string target)
{
    this->_target = target;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if ( this->getSigned() && executor.getGrade() <= this->getGradeToExecute() )
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    else if ( !this->getSigned() )
        std::cout << "Form is not signed" << std::endl;
    else 
        throw AForm::GradeTooLowException();
}