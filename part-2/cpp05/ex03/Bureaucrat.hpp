/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:37:39 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/06 20:37:29 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# include <string>

class AForm;
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

		Bureaucrat&		operator=( Bureaucrat const &src );

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int grade);

		void		incrementGrade();
		void		decrementGrade();
		void		signForm(AForm &f);
		void        executeForm( const AForm& form ) const;

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