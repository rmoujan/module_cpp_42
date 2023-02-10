/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 20:39:06 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main()
{

    std::vector<int> vect;
    for (int count=0; count < 6; ++count)
        vect.push_back(count);
	
	std::vector<int>::iterator ptr;
	
	for (ptr = vect.begin(); ptr < vect.end(); ptr++)
	{
		std::cout << *ptr << ' ';
	}

	std::cout << '\n';	
	std::cout <<easyfind<std::vector<int> >(vect, 21);
   
    std::cout << '\n';
}