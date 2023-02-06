/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:45:39 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/06 15:39:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void)
{
	//First method :: 
	// Base * obj1 = new A();
	// Base * obj2 = new B();
	// Base * obj3 = new C();
	
	// Base *data[3] = {obj1, obj2, obj3};
	// int random = (rand() % 2);
	// return (data[random]);
	//Second Method ::
	int random = 1 + (rand() % 3);
	std::cout <<"random is " <<random<<std::endl;
	if (random == 1)
	{
		return new A();
	}
	else if (random == 2)
	{
		return new B();
	}
	else if (random == 3)
	{
		return new C();
	}
	return NULL;
}


void identify(Base* p)
{
	A *obj1 = dynamic_cast<A*>(p);
	B *obj2 = dynamic_cast<B*>(p);
	C *obj3 = dynamic_cast<C*>(p);
	if (obj1 != NULL)
		std::cout <<"the type of p is A "<<std::endl;
	if (obj2 != NULL)
		std::cout <<"the type of p is B "<<std::endl;
	if (obj3 != NULL)
		std::cout <<"the type of p is C "<<std::endl;
}

void identify(Base& p)
{
	
}

int main()
{
	// int random = rand() % 2;
	
	// std::cout <<random;
	Base *result = generate();
	identify(result);
	return (0);
}