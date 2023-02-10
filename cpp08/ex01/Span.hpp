/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:35 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 13:47:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span{
	public:
	std::vector <int> data; 
	int size;
	// public:
	Span(unsigned int N);
	void addNumber(int elm);
	void shortestSpan();
	void longestSpan();
	void output();
	void addNumbersOnce();
	class outOfRange : public std::exception{
		public:
        virtual const char* what()const throw(){
            return ("\033[1;31m You are depassed numbers authorized \033[0m");
        }	
	};
};

#endif