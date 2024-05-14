/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:22 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/14 22:32:34 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

typedef struct	s_data {

	std::string key;
	int			value;

}	Data;

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer& src);
	public:
		~Serializer();
		Serializer&	operator=(const Serializer& rhs);

		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

};
#endif