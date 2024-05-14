/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:03:31 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 21:21:02 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
class PresidentialPardonForm : public AForm
{
	private:
		std:: string _target;

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( const std::string & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

		std::string getTarget() const;
		void setTarget(std::string target);
		void execute(Bureaucrat const & executor) const;
};

#endif