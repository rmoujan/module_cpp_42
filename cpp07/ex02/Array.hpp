/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 18:50:25 by rmoujan          ###   ########.fr       */
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
		data = new T[n]();
		sizearr = n;
		std::cout <<"Constructor by Prameter of Array has been invoked"<<std::endl;
	}
	Array(const Array & ref)
	{
		data = NULL;
		*this= ref;
		std::cout <<"Constructor by Copy of Array has been invoked"<<std::endl;
	}
	
	Array& operator=(const Array & ref)
	{
		if (this->data)
			delete [] data;
		this->data = new T[ref.sizearr];
		int i = 0;
		while (i < ref.sizearr)
		{
			data[i] = ref.data[i];
			i++;
		}
		std::cout <<"Copy Assignement Operator of Array has been invoked"<<std::endl;
		sizearr = ref.sizearr;
		return (*this);
	}
	

	void output()
	{
		int i = 0;
		while (data[i] < sizearr)
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
	~Array()
	{
		delete [] data;
	}
};

#endif