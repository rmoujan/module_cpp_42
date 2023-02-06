/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:53 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/06 10:22:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define  SERIALIZATION_HPP

class Serialization{

	public:
	Serialization ();
	Serialization (const Serialization & ref);
	Serialization & operator= (const Serialization & ref);
	~Serialization ();

	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
}



#endif