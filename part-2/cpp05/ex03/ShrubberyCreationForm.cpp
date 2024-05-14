/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:00:31 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 21:20:41 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm( "ShrubberyCreationForm", 0, 145, 137 ), _target( "default" ) {
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm( "ShrubberyCreationForm", 0, 145, 137 ), _target( target ) {
	std::cout << "ShrubberyCreationForm Parametrized constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm( src ), _target( src._target ) {
	std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
	std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
    (void)rhs;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void    ShrubberyCreationForm::setTarget(std::string target) {
	this->_target = target;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const {
    if (this->getSigned() && executor.getGrade() <= this->getGradeToExecute())
	{
		std::ofstream file( this->getTarget() + "_shrubbery" );
		file << "              13    13  13" << std::endl;
		file << "            13 13  13 13 13" << std::endl;
		file << "           13 13 13 13 13 13" << std::endl;
		file << "          13 13 13 13 13 13 13" << std::endl;
		file << "         13 13 13 13 13 13 13 13" << std::endl;
		file << "        13 13 13 13 13 13 13 13 13" << std::endl;
		file << "       13 13 13 13 13 13 13 13 13 13" << std::endl;
		file << "      13 13 13 13 13 13 13 13 13 13 13" << std::endl;
		file << "     13 13 13 13 13 13 13 13 13 13 13 13" << std::endl;
		file << "            |||||    |||||   |||||" << std::endl;
		file << "            |||||    |||||   |||||" << std::endl;
		file << "            |||||    |||||   |||||" << std::endl;

		file.close();
		std::cout << "ShrubberyCreationForm has been executed by " << executor.getName() << std::endl;
	}
	else if (!this->getSigned())
		std::cout << "Form is not signed" << std::endl;
	else
		throw AForm::GradeTooLowException();
}