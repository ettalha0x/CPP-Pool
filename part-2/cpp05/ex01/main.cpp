/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:44:56 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/05 19:29:25 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat b("b", 1);
    Form f("form 13", false, 5, 5);
 
    b.signForm(f);
    b.signForm(f);
    
    return (0);
}