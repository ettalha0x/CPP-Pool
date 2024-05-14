/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:25:27 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/24 11:21:04 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
   int test[] = {17,9,11};
   std::vector<int> arr(test, test + 3);
   Span sp = Span(5);

   try
   {
      sp.addNumber(6);
      sp.addNumber(3);
      sp.addRange(arr.begin(), arr.end());

      std::cout << std::string(10, '*') << " Spane values " << std::string(10, '*') << std::endl;
      for (size_t i = 0; i < sp.getSize(); i++)
      {
         std::cout << sp.getValue(i) << std::endl;
      }
      
      try
      {
         std::cout << std::string(10, '*') << " Shortest span " << std::string(10, '*') << std::endl;
         std::cout << sp.shortestSpan() << std::endl;
      }
      catch(const std::exception& e){ std::cerr << e.what() << '\n'; }

      try
      {
         std::cout << std::string(10, '*') << " Longest span " << std::string(10, '*') << std::endl;
         std::cout << sp.longestSpan() << std::endl;
      }
      catch(const std::exception& e){ std::cerr << e.what() << '\n'; }
   }
   catch(const std::exception& e)
   {
      std::cerr << e.what() << '\n';
   }

   return 0;
}