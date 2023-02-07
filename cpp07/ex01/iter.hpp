/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:45:54 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/07 22:35:19 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

//define new type using template 
template < typename T>
void fct (T x)
{
	std::cout <<x<<std::endl;
}

template < typename T>
void iter(T * array,int length,  void (*fct)(T))
{
	for (int i = 0; i <length; i++)
	{
		fct(array[i]);
	}
}


#endif