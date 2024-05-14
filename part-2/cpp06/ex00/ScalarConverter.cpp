/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:50:32 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/14 22:28:32 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter&	src)
{
	*this = src;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter&	rhs)
{
	(void)rhs;
	return *this;
}

void ScalarConverter::convert(std::string&	str) {

	ft_toChar(str);
	ft_toInt(str);
	ft_toFloat(str);
}


void ft_toChar(std::string&  value) {
	char *ch;
	double n = strtod(value.c_str(), &ch);
	char cValue = static_cast<char>(n);
	if(n == 0 && ch != NULL && strlen(ch) == 1)
	{
		cValue =  static_cast<char>(*ch);
		if (isprint(cValue))
			std::cout << "char: '" << cValue << "'" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else if (n && *ch == 'f' && strlen(ch) == 1)
	{
		if (isprint(cValue))
			std::cout << "char: '" << cValue << "'" << std::endl;
		else if (isnan(n))
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else if (n && strlen(ch) == 0)
	{
		if (isprint(cValue))
			std::cout << "char: '" << cValue << "'" << std::endl;
		else if (isnan(n))
			std::cout << "char: impossible" << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else if (!n && strlen(ch) == 0 && !isprint(static_cast<int>(n)))
		std::cout << "char: non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void ft_toInt(std::string&  value) {

	char *ch;
	double n = strtod(value.c_str(), &ch);
	int iValue = static_cast<int>(n);
	if(!n && ch != NULL && strlen(ch) == 1)
	{
		iValue =  static_cast<int>(*ch);
		if (iValue < INT_MIN || iValue > INT_MAX || isnan(iValue) || iValue == -2147483648) {
		std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << iValue << std::endl;
		}
	}
	else if (n && *ch == 'f' && strlen(ch) == 1)
	{
		if (iValue < INT_MIN || iValue > INT_MAX || isnan(iValue) || iValue == -2147483648) {
		std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << iValue << std::endl;
		}
	}
	else if ((n && strlen(ch) == 0))
	{
		if (iValue < INT_MIN || iValue > INT_MAX || isnan(iValue) || iValue == -2147483648) {
			std::cout << "int: impossible" << std::endl;
		} else {
			std::cout << "int: " << iValue << std::endl;
		}
	}
	else if (!n && strlen(ch) == 0 && !isprint(static_cast<int>(n)))
		std::cout << "int: " << static_cast<int>(n) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void ft_toFloat(std::string&  value) {

	char *ch;
	double n = strtod(value.c_str(), &ch);
	int   iValue = static_cast<int>(n);
	float fValue = static_cast<float>(n);
	double dValue = static_cast<double>(n);

	if(n == 0 && ch != NULL && strlen(ch) == 1)
	{
		iValue =  static_cast<int>(*ch);
		fValue =  static_cast<float>(*ch);
		dValue =  static_cast<double>(*ch);
		if (abs(fValue) - abs(iValue) == 0) {
		std::cout << "float: " << fValue << ".0f" << std::endl;
		std::cout << "double: " << dValue << ".0" << std::endl;
		} else {
			std::cout << "float: " << fValue << "f" << std::endl;
			std::cout << "double: " << dValue << std::endl;
		}
	}
	else if (n && *ch == 'f' && strlen(ch) == 1)
	{
		if (abs(fValue) - abs(iValue) == 0) {
		std::cout << "float: " << fValue << ".0f" << std::endl;
		std::cout << "double: " << dValue << ".0" << std::endl;
		} else {
			std::cout << "float: " << fValue << "f" << std::endl;
			std::cout << "double: " << dValue << std::endl;
		}
	}
	else if ((n && strlen(ch) == 0))
	{
		if (abs(fValue) - abs(iValue) == 0) {
		std::cout << "float: " << fValue << ".0f" << std::endl;
		std::cout << "double: " << dValue << ".0" << std::endl;
		} else {
			std::cout << "float: " << fValue << "f" << std::endl;
			std::cout << "double: " << dValue << std::endl;
		}
	}
	else if (!n && strlen(ch) == 0 && !isprint(static_cast<int>(n)))
	{
		std::cout << "float: " << fValue << "f" << std::endl;
		std::cout << "double: " << dValue << std::endl;
	}
	else {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
