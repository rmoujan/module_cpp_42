/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 21:10:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span :: Span(unsigned int N)
{
	size = N;
}

void Span :: addNumber(int elm)
{
	try{
		if (data.size() > (size - 1 ))
		{
			throw outOfRange();	
		}	
		data.push_back(elm);
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void Span :: output()
{
	std::cout <<"\nVectors ' Elements are : "<< std::endl;
    for (unsigned int count=0; count < data.size(); ++count)
        std::cout <<data[count] <<"  ";
	std::cout<<std::endl;
}

int Span :: shortestSpan()
{
	int min;

	try{
		if (data.size() == 0 || data.size() == 1)
			throw emptySpan();
		std::sort(data.begin(),data.end());
		min = data[1] - data[0];
		std::vector<int>::iterator ptr ;
		std::vector<int>::iterator p ;
		
		for (ptr = data.begin(); ptr != (data.end() - 1); ptr++)
		{
			p = ptr + 1;
			if (((*p) - *ptr) <= min)
				min = ((*p) - *ptr);
		}
		
		return (min);
	}
	catch(std::exception & e)
	{
		std::cout <<e.what();
	}
	return 0;
}

int Span :: longestSpan()
{
	int max;
	
		try{
		if (data.size() == 0 || data.size() == 1)
			throw emptySpan();
		std::sort(data.begin(),data.end());
		max = *(data.end() - 1) - (*data.begin());
		return (max);
	}
	catch(std::exception & e)
	{
		std::cout <<e.what();
	}
	return 0;
}

void Span :: addNumbersOnce(int arr[], int len)
{
	int add;
	try{
		if (data.size() < size)
		{
			add = size - data.size();
			if (add < len)
				len = add;
			
			data.insert(data.end(),arr , arr + len);
		}
		else
			throw outOfRange();
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<<std::endl;
	}
	
}

unsigned int Span :: getSize(){
	return (size);
}

Span :: ~Span()
{
	
}
Span :: Span()
{
	
}

Span :: Span (const Span & ref)
{
	*this = ref;
}

Span &  Span :: operator=(const Span & ref)
{
	this->size = ref.size;
	this->data = ref.data;
	return (*this);
}