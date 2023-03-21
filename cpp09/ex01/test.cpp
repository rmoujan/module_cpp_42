/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:22:16 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/20 22:27:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main()
{
	std::stack<int> numbers;
	int a,b;
	numbers.push(10);
	// numbers.push(3);
	// numbers.push(4);
	while (!numbers.empty())
	{
    	a = numbers.top();
		std::cout <<"a is "<<a<<std::endl;
    	numbers.pop();
		// std::cout <<"CHECK "<<numbers.empty()<<std::endl;
		if (!numbers.empty())
		{
			b = numbers.top();
			std::cout <<"b is "<<b<<std::endl;
			numbers.pop();
		}
    }
}