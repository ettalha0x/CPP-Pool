/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:48:11 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 15:48:18 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;
class AForm
{
	private:

		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:

		AForm();
		AForm( std::string name, bool ssigned, int  gradeToSign, int gradeToExecute);
		AForm( AForm const & src );
		virtual ~AForm();

		AForm &		operator=( AForm const & src );
		void		beSigned(Bureaucrat &b);
		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
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

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif