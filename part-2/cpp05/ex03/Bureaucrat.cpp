/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:38:10 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:37:46 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default Bureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;	
}

Bureaucrat::Bureaucrat(std::string name, int grade)	: _name(name)
{
	std::cout << "Bureaucrat Parametraized constructor called" << std::endl;	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) : _name(src.getName())
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;	
	*this = src;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat distructor called" << std::endl;
}

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const &src )
{
	std::cout << "Bureaucrat assignement operator called" << std::endl;	
	if ( this != &src )
		this->_grade = src.getGrade();
	return *this;
}

std::ostream& operator<<( std::ostream& o, Bureaucrat& src ) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return o;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void		Bureaucrat::signForm(AForm &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;
	}
}

void    Bureaucrat::executeForm( const AForm& form ) const {
    try {
        form.execute( *this );
    } catch ( std::exception& e ) {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}