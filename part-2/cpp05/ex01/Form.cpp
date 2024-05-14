/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:44:44 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 19:33:17 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form() : _name("default form"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Default constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( std::string name, bool ssigned, int  gradeToSign, int gradeToExecute) : _name(name), _signed(ssigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form Parametrized constructor called" << std::endl;
	if (this->_gradeToSign < 1 || this->_gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this->_gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form( const Form & src ) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
	std::cout << "Form Copy constructor called" << std::endl;
	*this = src;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}


Form &				Form::operator=( Form const & src )
{
	std::cout << "Form assignement operator called" << std::endl;
	if ( this != &src )
		this->_signed = src.getSigned();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Name: " << i.getName() << std::endl << "Signed: " << i.getSigned() << std::endl << "Grade to sign: " << i.getGradeToSign() << std::endl << "Grade to execute: " << i.getGradeToExecute() << std::endl;
	return o;
}


const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too Low";
}

void	Form::beSigned(Bureaucrat &b)
{
	if (this->_signed)
		std::cout << "Form is already signed" << std::endl; 
	else if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
		std::cout << this->_name << " signs " << _name << std::endl;	
	}
	else
		throw Form::GradeTooLowException();
}


std::string		Form::getName() const
{
	return this->_name;
}

bool			Form::getSigned() const
{
	return this->_signed;
}

int				Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int				Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}