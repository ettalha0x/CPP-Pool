/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:43:51 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/23 19:41:49 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main (){
   MutantStack<int> mstack;
   mstack.push(5);
   mstack.push(17);
   std::cout << mstack.top() << std::endl;
   mstack.pop();
   std::cout << mstack.size() << std::endl;
   std::cout << std::string(10, '*') << std::endl;
   mstack.push(3);
   mstack.push(5);
   mstack.push(737);
   //[...]
   mstack.push(0);
   MutantStack<int>::iterator it = mstack.begin();
   MutantStack<int>::iterator ite = mstack.end();
   ++it;
   --it;
   while (it != ite)
   {
      std::cout << *it << std::endl;
      ++it;
   }
   std::stack<int> s(mstack);

   return 0;
}