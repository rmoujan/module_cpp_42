/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 17:36:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 18:19:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"
int main()
{

    std::vector<int> vect;
    for (int count=0; count < 6; ++count)
        vect.push_back(10 - count); // insert at end of array
    for (unsigned long  index=0; index < vect.size(); ++index)
        std::cout << vect[index] << ' ';
	std::cout << '\n';	
	std::cout <<easyfind<int>(vect, 155);
   
    std::cout << '\n';
}