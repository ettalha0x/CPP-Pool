/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:47:16 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/26 12:14:58 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

	template <typename T>
	void displayElement(T const &element)
	{
		std::cout << element << std::endl;
	}

	template <typename T>
	void	iter(T *arr, int len, void(*func)(T const &arg))
	{
		for(int i = 0;i < len;i++)
		{
			func(arr[i]);
		}
	}

#endif