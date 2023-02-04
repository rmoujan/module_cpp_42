/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:18 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/04 12:55:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ScalarConversion.hpp"
#include "iostream"
#include <typeinfo>
using namespace std;
int main(int argc, char *argv[])
{
	if (argc >= 2)
	{

			std::cout <<typeid(argv[1]).name()<<std::endl;
			return 0;

	}
	std::cout <<"PLEASE ENTER AN ARGUMENT "<<std::endl;	
	return (0);
}

// int main() {
//     int x = 200;
//     float y = 200.790;
//     cout << typeid(x).name() << endl;
//     cout << typeid(y).name() << endl;
//     cout << typeid(x*y).name() << endl;
//     return 0;
// }