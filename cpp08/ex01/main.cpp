/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:21:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 21:04:35 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"
// #include <iostream>
// #include <vector>
int main()
{
	Span sp;
	// int arr[] = {2,5,8,11,14};
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addNumber(88);
	// sp.addNumber(80000);
	// sp.addNumbersOnce(arr, 5);
	sp.output();
	std::cout <<"\nshortest span is : "<<sp.shortestSpan()<<std::endl;
	std::cout <<"longest span is : "<<sp.longestSpan()<<std::endl;
	sp.output();
    std::cout << " \n size is "<<sp.getSize();
	
	return 0;
}
