/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 16:05:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array <int> *test = new Array<int>(4);
	test->output();
	std::cout <<"--------------------------"<<std::endl;
	Array <int> *copy = new Array<int>();
	*copy = *test;
	std::cout <<"--------------------------"<<std::endl;
	copy->output();
	(*copy)[0] = 5;
	std::cout <<"COPY size is  === "<<copy->size()<<std::endl;
	std::cout <<"TEST size is  === "<<copy->size()<<std::endl;
	std::cout <<"********************"<<std::endl;
	copy->output();

	delete test;
	delete copy;
	std::cout <<"after delete" <<std::endl;

	// Array<int> obj(5);
	// Array<int> test(obj);
	// std::cout <<"OBJ data "<<std::endl;
	// obj.output();
	// std::cout <<"TEST data "<<std::endl;
	// test.output();
	// std::cout <<"-----------------------------"<<std::endl;
	// std::cout <<"UPDATING OBJ "<<std::endl;
	// obj[0] = 10;
	// obj[1] = 20;
	// obj[2] = 30;
	// obj[3] = 40;
	// obj[4] = 50;
	// std::cout <<"OBJ data "<<std::endl;
	// obj.output();
	// std::cout <<"TEST data "<<std::endl;
	// test.output();
	// std::cout <<"-----------------------------"<<std::endl;
	// std::cout <<"UPDATING TEST "<<std::endl;
	// test[0] = -10;
	// test[1] = -20;
	// test[2] = -30;
	// test[3] = -40;
	// test[4] = -50;
	// std::cout <<"OBJ data "<<std::endl;
	// obj.output();
	// std::cout <<"TEST data "<<std::endl;
	// test.output();

	// std::cout <<"-----------------------------"<<std::endl;
	// std::cout<<obj[1]<<std::endl;
	// std::cout<<test[4]<<std::endl;
	// std::cout <<"size of  obj is "<<obj.size()<<std::endl;
	return (0);
}