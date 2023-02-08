/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 15:41:05 by rmoujan          ###   ########.fr       */
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
			exit(0);
		}
	}

	// void getElement(int index)
	// {
	// 	std::cout <<sizearr<<std::endl;
	// 	try{
	// 		if (index < 0 || index >= sizearr )
	// 		{
	// 			throw OutOfBounds();
	// 		}
	// 		std::cout <<" ELEMENT IS = "<<data[index]<<std::endl;
	// 	}
	// 	catch (std::exception &e)
	// 	{
	// 		std::cout <<e.what()<<std::endl;
	// 	}
	// }
	// void setElement(int index, T value)
	// {
	// 	std::cout <<sizearr<<std::endl;
	// 	try{
	// 		if (index < 0 || index >= sizearr )
	// 		{
	// 			throw OutOfBounds();
	// 		}
	// 		data[index]  = value;
	// 	}
	// 	catch (std::exception &e)
	// 	{
	// 		std::cout <<e.what()<<std::endl;
	// 	}
	// }
};



#endif