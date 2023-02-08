/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:36:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/08 15:39:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	// Array <int> *test = new Array<int>(4);
	// // std::cout <<"test is  === " <<test.size()<<std::endl;
	// test->output();
	// std::cout <<"--------------------------"<<std::endl;
	// Array <int> *copy = new Array<int>();
	// *copy = *test;
	// copy->output();
	// copy->getElement(4);
	// std::cout <<"size is  === "<<copy->size()<<std::endl;
	// std::cout <<"********************"<<std::endl;
	// // Array<int> *save(*copy);
	// // save->output();
	// copy->setElement(9, 7);
	// std::cout <<"after set "<<std::endl;
	// std::cout <<"using [] "<< test[0]<<std::endl;
	// delete test;
	// delete copy;
	// delete save;

	Array<int> obj(5);
	obj.output();
	std::cout <<"---------"<<std::endl;
	std::cout<<obj[1]<<std::endl;
	std::cout <<"======="<<std::endl;
	obj[1] = 88;
	// obj.[](1, 88);
	std::cout <<"---------"<<std::endl;
	std::cout<<obj[1]<<std::endl;
	std::cout <<"======="<<std::endl;
	return (0);
}