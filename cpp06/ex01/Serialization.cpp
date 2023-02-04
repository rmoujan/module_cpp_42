/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:38 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/04 17:11:33 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization :: Serialization()
{
	std::cout<<"Default Constructor of Serialization  has been invoked "<<std::endl;
}

Serialization :: Serialization(const Serialization & ref)
{
	std::cout<<"Constructor By Copy of Serialization  has been invoked "<<std::endl;
	*this = ref;
}


Serialization& Serialization :: oeprator=(const Serialization & ref))
{
	std::cout<<"Default Constructor of Serialization  has been invoked "<<std::endl;
}

Serialization :: ~Serialization()
{
	std::cout<<"Destructor of Serialization  has been invoked "<<std::endl;
}