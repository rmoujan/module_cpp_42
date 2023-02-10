/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:35 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 17:43:51 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{

	std::vector <int> data; 
	unsigned int  size;
	public:
	Span();
	Span(const Span & ref);
	Span & operator=(const Span & ref);
	~Span();
	Span(unsigned int N);
	
	void addNumber(int elm);
	int shortestSpan();
	int longestSpan();
	void output();
	unsigned int getSize();
	void addNumbersOnce(int arr[], int len);
	
	class outOfRange : public std::exception{
		public:
        virtual const char* what()const throw(){
            return ("\033[1;31m You are depassed numbers authorized \033[0m");
        }	
	};
	
	class emptySpan : public std::exception{
		public:
        virtual const char* what()const throw(){
            return ("\033[1;31m this Span is empty \033[0m");
        }	
	};
};

#endif