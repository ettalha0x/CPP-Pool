/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nettalha <nettalha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:51:16 by nettalha          #+#    #+#             */
/*   Updated: 2023/11/15 10:32:51 by nettalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer& src)
{
	*this = src;
}

Serializer::~Serializer()
{

}

Serializer &				Serializer::operator=( Serializer const &rhs)
{
	(void)rhs;
	return *this;
}

uintptr_t	Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		Serializer::deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}
