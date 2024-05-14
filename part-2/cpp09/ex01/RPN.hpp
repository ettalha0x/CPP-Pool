/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:24:45 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/01 17:22:22 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <sstream>
#include <stack>


class RPN
{
    private:
        std::stack<int> operandStack;
    public:
        RPN();
        RPN(RPN const &copy);
        RPN &operator=(RPN const &other);
        ~RPN();

        bool calculate(std::string const &expression);
        bool exec_operation(std::string token);
        bool isOperator(const std::string& token);
        bool ft_toInt(std::string token);
};

