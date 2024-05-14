/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:58:09 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 18:30:23 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form", 0, 72, 45), _target("default") {
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target ) : AForm("Robotomy Request Form", 0, 72, 45), _target(target) {
    std::cout << "RobotomyRequestForm Parametrized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src ) : AForm(src), _target(src._target) {
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&    RobotomyRequestForm::operator=( RobotomyRequestForm& rhs ) {
    std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
    ( void )rhs;
    return *this;
}

std::string RobotomyRequestForm::getTarget() const {
    return this->_target;
}

void    RobotomyRequestForm::setTarget(std::string target) {
    this->_target = target;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if ( this->getSigned() && executor.getGrade() <= this->getGradeToExecute() ){
        static int  i;
        if ( i % 2 == 0 )
            std::cout << "BZZZZZT! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
        i++;
    }
    else if ( !this->getSigned() )
        std::cout << "Form is not signed" << std::endl;
    else
        throw AForm::GradeTooLowException();
}