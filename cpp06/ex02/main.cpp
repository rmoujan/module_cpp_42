/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:45:39 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 00:00:32 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void)
{
	srand(time(NULL));
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
	std::cout <<"From Identify By Pointer" <<std::endl;
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
	std::cout <<"From Identify By Reference " <<std::endl;
	try{
		
		A &obj1 = dynamic_cast<A &>(p);
		std::cout <<"the type of p is A "<<std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}
	try{
		B &obj2 = dynamic_cast<B &>(p);
		std::cout <<"the type of p is B "<<std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}
	try{
		C &obj3 = dynamic_cast<C &>(p);
		std::cout <<"the type of p is C "<<std::endl;
	}
	catch(std::bad_cast &bc)
	{
	}

}

int main()
{
	Base *result = generate();
	identify(*result);
	identify(result);
	return (0);
}