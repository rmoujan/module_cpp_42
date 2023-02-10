/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 13:49:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
// #include <iostream>
// #include <vector>
int main()
{
	Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	sp.addNumbersOnce();
	sp.addNumber(77);
	sp.addNumber(88);
	sp.output();
   
    std::cout << "'size is '"<<sp.data.size();
	
	return 0;
}