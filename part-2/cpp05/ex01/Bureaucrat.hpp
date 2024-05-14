/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:44:36 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:38:35 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class Form;
class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const &src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const &src );

		void		setGrade(int grade);
		std::string	getName() const;
		int			getGrade() const;

		void		incrementGrade();
		void		decrementGrade();
		void		signForm(Form &f);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream&   operator<<( std::ostream& o, Bureaucrat& src );

#endif