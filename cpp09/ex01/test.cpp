/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:22:16 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 14:46:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main()
{

	std::istringstream my_stream("1 2 * / ");
    char c;
    while (my_stream) {
        my_stream >> c;
		std::cout <<"|"<<c<<"|"<<std::endl;
    }
}