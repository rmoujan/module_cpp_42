/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:13:55 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 23:06:43 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <list>

int main()
{
	
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); 
	mstack.push(2); 
	mstack.push(737);	
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout <<" -------------- "<<std::endl;
	while (it != ite)
	{
	    std::cout << *it << std::endl;
		++it; 
	}
	std::stack<int> s(mstack); 
	return 0;
}