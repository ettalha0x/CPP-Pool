/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:44:52 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 19:34:50 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default Aform"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm Default constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( std::string name, bool ssigned, int  gradeToSign, int gradeToExecute) : _name(name), _signed(ssigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm Parametrized constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm( const AForm & src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	std::cout << "AForm Copy constructor called" << std::endl;
	*this = src;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

AForm &				AForm::operator=( AForm const & src )
{
	std::cout << "AForm assignement operator called" << std::endl;
	if ( this != &src )
		this->_signed = src.getSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
{
	o << "Name: " << i.getName() << std::endl << "Signed: " << i.getSigned() << std::endl << "Grade to sign: " << i.getGradeToSign() << std::endl << "Grade to execute: " << i.getGradeToExecute() << std::endl;
	return o;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->_signed)
		std::cout << "Form is already signed" << std::endl; 
	else if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
		std::cout << this->_name << " signs " << _name << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}

std::string		AForm::getName() const
{
	return this->_name;
}

bool			AForm::getSigned() const
{
	return this->_signed;
}

int				AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int				AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}