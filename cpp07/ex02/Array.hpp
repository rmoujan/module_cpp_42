/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/07 23:15:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <class T>
class Array {
    T *data;


   public:
	Array()
	{
		data = new T();
	
	}
	Array(unsigned int n)
	{
		data = new T[n];
		for(unsigned int i = 0; i < n; i++)
		{
			data[i] = 5;
		}

	}
	Array(const Array & ref)
	{
		*this= ref;
	}
	
	Array& operator=(const Array & ref)
	{
		// this->size =  ref.size;
		this->data = new T[ref.data.length()];
		
		for(int i = 0; i < ref.data.length(); i++)
		{
			data[i] = ref.data[i];
		}
		return (*this);
	}
	

	void output()
	{
		for (int i = 0; i <5; i++)
		{
			std::cout <<data[i]<<std::endl;
		}
	}
	// int size()
	// {
	// 	int count = 0;
	// 	for (int i = 0; i <data.size(); i++)
	// 	{
	// 		count++;
	// 	}
	// 	return count;
	// }
	
};



#endif