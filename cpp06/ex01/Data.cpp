/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:38 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/06 14:44:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{	
	uintptr_t result = reinterpret_cast <uintptr_t >(ptr);
	return (result);
}

Data* deserialize(uintptr_t raw)
{
	Data *result = reinterpret_cast <Data *>(raw);
	return (result);
}

int main()
{
	Data *test = (Data*)malloc(sizeof(Data));
	

	test->x = 10;
	test->y = 320;
	std::cout <<"-------------------------"<<std::endl;
	std::cout <<"BEFORE CONVERSION "<<std::endl<<std::endl;
	std::cout <<"X is == "<<test->x<<std::endl;
	std::cout <<"Y is == "<<test->y<<std::endl;
	std::cout <<"-------------------------"<<std::endl;
	std::cout <<"AFTER CONVERSION "<<std::endl<<std::endl;
	uintptr_t result1 = serialize(test);
	std::cout <<"UNSIGNED INTEGER : " <<result1<<std::endl;
	Data *result2 = deserialize(result1);
	std::cout <<"POINTER TO DATA : X is == " <<result2->x<<" AND Y is == "<<result2->y<<std::endl;

	//segfault
	// uintptr_t x =154185154564684;
	// Data *test = deserialize(x);
	// std::cout <<"POINTER TO DATA : X is == " <<test->x<<" AND Y is == "<<test->y<<std::endl;
	return (0);
}