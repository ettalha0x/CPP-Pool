/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:24:42 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/04 11:41:01 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

    RPN::RPN() {

    }
    RPN::RPN(RPN const &copy) {
        *this = copy;
    }
    RPN &RPN::operator=(RPN const &other) {
        if (this != &other)
            operandStack = other.operandStack;

        return *this;
    }

    RPN::~RPN() {
    }

    bool RPN::calculate(std::string const &expression) {
        std::istringstream iss(expression);
        std::string token;

        while (iss >> token) {
            if (!isOperator(token)) {
                // If the token is not an operator, convert it to an integer and push onto the stack
                if (!ft_toInt(token))
                    return (std::cout << "The RPN expression is not valid.", false);
            } else {
                if (!exec_operation(token))
                    return (std::cout << "The RPN expression is not valid.", false);
            }
        }
        // The result should be the only element left in the stack
        if (operandStack.size() != 1)
            return (std::cout << "The RPN expression is not valid.", false);
        std::cout << operandStack.top() << std::endl;
        return true;
    }


    bool RPN::isOperator(const std::string& token) {
        return (token == "+" || token == "-" || token == "*" || token == "/");
    }

    bool RPN::ft_toInt(std::string token) {
        char *end;
        long n = std::strtol(token.c_str(), &end, 10);
        
        if (strlen(end) > 1 || *end == 'f' || *end == '.') {
            // Failed to convert to an integer
            return false;
        }
        operandStack.push(n);
        return true;
    }

    bool RPN::exec_operation(std::string token) {
        if (operandStack.size() < 2) {
            // Not enough operands for the operator
            return false;
        }
        int operand2 = operandStack.top();
        operandStack.pop();
        int operand1 = operandStack.top();
        operandStack.pop();

        // Perform the operation
        if (token == "/") {
            if (operand2 == 0) {
                // Division by zero
                return false;
            }
            operandStack.push(operand1 / operand2);
        } else if (token == "+") {
            operandStack.push(operand1 + operand2);
        } else if (token == "-") {
            operandStack.push(operand1 - operand2);
        } else if (token == "*") {
            operandStack.push(operand1 * operand2);
        }
        return true;
    }

