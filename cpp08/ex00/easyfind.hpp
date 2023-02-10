/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:14:15 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 20:37:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include<iterator>
#include <list>
#include <array>

template <typename T>

int easyfind(T &arg, int value)
{
    typename T::iterator ptr;

	for (ptr = arg.begin(); ptr != arg.end(); ptr++)
	{
		if (*ptr == value)
		{
			std::cout <<"the second parameter is exist in the first parameter"<<std::endl;
			return (*ptr);
		}
	}
	std::cout <<"the second parameter is not exist in the first parameter"<<std::endl;
	return (-1);
}


#endif