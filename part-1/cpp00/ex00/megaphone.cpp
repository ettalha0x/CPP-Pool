/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 23:08:17 by nettalha          #+#    #+#             */
/*   Updated: 2023/07/04 15:37:01 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

char	*ft_toupper(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		i++;
	}
	return s;
}


int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		while (*av)
		{
			cout << ft_toupper(*av);
			av++;
		}
		cout << endl;
	}
	else
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	return 0;
}