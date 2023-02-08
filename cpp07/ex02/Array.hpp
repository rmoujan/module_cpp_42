/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 16:04:24 by rmoujan          ###   ########.fr       */
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
       class OutOfBounds : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("\033[1;31mOUT OF RANGE \033[0m");
        }
    };
	Array()
	{
		data = new T();
		sizearr = 0;
		std::cout <<"Default constructor of Array has been invoked"<<std::endl;
	
	}
	Array(unsigned int n)
	{
		data = new T[n + 1];
		unsigned int i;
		for(i = 0; i < n ; i++)
		{
			data[i] = 1;
		}
		data[i] = '\0';
		sizearr = n;
		std::cout <<"Constructor by Prameter of Array has been invoked"<<std::endl;
	}
	Array(const Array & ref)
	{
		*this= ref;
		std::cout <<"Constructor by Copy of Array has been invoked"<<std::endl;
	}
	
	Array& operator=(const Array & ref)
	{
		this->data = new T[ref.sizearr];
		int i = 0;
		// if (ref.data)
		// {
			while (ref.data[i])
			{
				data[i] = ref.data[i];
				i++;
			}
			data[i] = '\0';
		// }
		std::cout <<"Copy Assignement Operator of Array has been invoked"<<std::endl;
		sizearr = ref.sizearr;
		return (*this);
	}
	

	void output()
	{
		int i = 0;
		std::cout <<"FROM OUTPUT "<<std::endl;
		while (data[i] != '\0')
		{
			std::cout <<data[i]<<std::endl;
			i++;
		}
	}
	
	int size()const 
	{
		return (sizearr);
	}
	
	T & operator[](int index)
	{
		try{
			if (index < 0 || index >= sizearr )
			{
				throw OutOfBounds();
			}
			return (data[index]);
		}
		catch (std::exception &e)
		{
			std::cout <<e.what()<<std::endl;
			return (data[index]);
		}
	}
};



#endif