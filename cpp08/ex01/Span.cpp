/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 13:49:09 by rmoujan          ###   ########.fr       */
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
			throw outOfRange();	
		data.push_back(elm);
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void Span :: output()
{
	// std::cout << "'size is '"<data.size());
	std::cout <<"Vectors ' Elements are : "<< std::endl;
    for (int count=0; count < data.size(); ++count)
        std::cout <<data[count] <<"  ";
}

void Span :: shortestSpan()
{
	int min;
	
	try{
		if (data.size() == 0 || data.size() == 1)
			throw outOfRange();
	
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void Span :: longestSpan()
{
	int max;
	
	try{
		if (data.size() == 0 || data.size() == 1)
			throw outOfRange();
	
	}
	catch(std::exception & e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void Span :: addNumbersOnce()
{
	data.insert(data.end(), { 1, 2, 3, 4, 5, 6 });
}