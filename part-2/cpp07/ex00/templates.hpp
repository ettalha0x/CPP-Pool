/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:44:11 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/17 15:18:21 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>
# include <string>

	template <typename T> void	swap(T &arg1, T &arg2)
	{
		T tmp;
		tmp = arg1;
		arg1 = arg2;
		arg2 = tmp;
	};

	template <typename T> T		min(T &arg1, T &arg2)
	{
		if (arg2 > arg1)
			return arg1;
		return arg2;
	};

	template <typename T> T		max(T &arg1, T &arg2)
	{
		if (arg2 < arg1)
			return arg1;
		return arg2;
	};

#endif