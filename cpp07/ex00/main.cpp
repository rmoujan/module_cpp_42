/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:00:46 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/06 18:44:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{

	int a = 10;
	int b = 0;
	std::cout <<"----- TEST SWAP -----"<<std::endl;
	std::cout <<"BEFORE A IS   "<<a<<"  AND B IS "<<b<<std::endl;
	swap<int>(a, b);
	std::cout <<"AFETR  A IS   "<<a<<"   AND B IS "<<b<<std::endl;
	std::cout <<"------------------------------------------------"<<std::endl;
	double x = 10.26;
	double y = 200.987;
	std::cout <<"BEFORE X IS   "<<x<<"  AND Y IS "<<x<<std::endl;
	swap<double>(x, y);
	std::cout <<"AFETR  X IS   "<<x<<"   AND Y IS "<<y<<std::endl;
	std::cout <<"----- TEST MIN -----"<<std::endl;
	std::cout <<"min between a et b is " <<min<int>(a,b)<<std::endl;
	std::cout <<"max between a et b is " <<max<int>(a,b)<<std::endl;
	std::cout <<"------------------------------------------------"<<std::endl;
	std::cout <<"min between x et y is " <<min<double>(x,y)<<std::endl;
	std::cout <<"max between x et y is " <<max<double>(x,y)<<std::endl;


	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}