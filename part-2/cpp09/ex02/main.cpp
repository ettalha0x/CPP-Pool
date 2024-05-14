/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:45:10 by nettalha          #+#    #+#             */
/*   Updated: 2023/12/17 17:07:13 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char** av) {
    try
    {
        std::vector<int> vec = fillvector(ac, av);
        std::list<int> list = fill_list(ac, av);
    
        std::cout << RED_TEXT << "befor: " << RESET_TEXT;
        print_arr(vec.begin(), vec.end());

        double listElapsedTime = sort_container(list);
        double vecElapsedTime = sort_container(vec);
        std::cout << GREEN_TEXT<< "after: " << RESET_TEXT;
        print_arr(vec.begin(), vec.end());
        std::cout << YELLOW_TEXT << "number of compariaosn: " << RESET_TEXT << count <<  std::endl;
        std::cout << BLUE_TEXT << "Time to process a range of " << vec.size() << " elements with std::vec: " << RESET_TEXT << vecElapsedTime << " us\n";
        std::cout << BLUE_TEXT << "Time to process a range of " << list.size() << " elements with std::list: " << RESET_TEXT << listElapsedTime << " us\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << "error" << '\n';
    }
    return 0;
}