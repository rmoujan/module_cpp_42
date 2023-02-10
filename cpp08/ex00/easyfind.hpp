/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 16:14:15 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 18:19:23 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>

template <typename T>

T easyfind(std:: vector<T> &arg, int value)
{
	T var = -1;
	for (unsigned long i = 0; i < arg.size(); i++)
	{
		if (arg[i] == value)
			return (arg[i]);
	}
	std::cout <<"the second parameter is not exist in the first parameter"<<std::endl;
	return (var);
}


#endif