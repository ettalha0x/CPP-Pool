/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:50:24 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/15 11:37:25 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <math.h>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter&	src);

	public:
		~ScalarConverter();
		ScalarConverter&	operator=(const ScalarConverter&	rhs);
		static void convert(std::string&	str);
};

void 	ft_toChar(std::string& value);
void 	ft_toInt(std::string&	value);
void 	ft_toFloat(std::string&	value);


#endif