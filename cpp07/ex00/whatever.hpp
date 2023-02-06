/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:00:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/06 18:42:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
//define new type using template 
template < typename T>
void swap(T & a, T & b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template < typename T>
T & min(T & a, T & b)
{
	if (a < b)
		return a;
	else if (b < a)
		return b;
	else
		return b;
}

template < typename T>
T & max(T & a, T & b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;
	else
		return b;
}

#endif