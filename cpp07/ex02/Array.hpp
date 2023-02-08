/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 14:38:22 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
template <class T>
class Array {
    T *data;
	int sizearr;


   public:
	Array()
	{
		data = new T();
		sizearr = 0;
		std::cout <<"default const "<<std::endl;
	
	}
	Array(unsigned int n)
	{
		data = new T[n + 1];
		unsigned int i;
		for(i = 0; i < n ; i++)
		{
			data[i] = 5;
		}
		data[i] = '\0';
		sizearr = n;
		std::cout <<" const by param "<<std::endl;
	}
	Array(const Array & ref)
	{
		*this= ref;
		std::cout <<"copy const"<<std::endl;
	}
	
	Array& operator=(const Array & ref)
	{
		// this->size =  ref.size;
		this->data = new T[ref.sizearr];
		int i = 0;
		while (ref.data[i])
		{
			data[i] = ref.data[i];
			i++;
		}
		data[i] = '\0';
		std::cout <<"copy assignement "<<std::endl;
		sizearr = ref.sizearr;
		return (*this);
	}
	

	void output()
	{
		int i = 0;
		while (data[i] != '\0')
		{
			std::cout <<data[i]<<std::endl;
			i++;
		}
	}
	int size()
	{
		return (sizearr);
	}
	void getElement(int index)
	{
		std::cout <<sizearr<<std::endl;
		try{
			if (index < 0 || index >= sizearr )
			{
				throw (-1);
			}
			std::cout <<" ELEMENT IS = "<<data[index]<<std::endl;
		}
		catch (int code)
		{
			std::cout <<"OUT OF RANGE "<<std::endl;
		}
	}
};



#endif