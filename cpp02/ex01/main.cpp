/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:11:45 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/01 00:51:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    
    // Fixed a;
    Fixed const b( 10 ); 
    // Fixed const c( 42.42f ); 
    // Fixed const d( b );

    // a = Fixed( 1234.4321f );
    // std::cout<<"Hallo Welt hie In Marokko"<<std::endl;
    // std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    // std::cout << "c is " << c << std::endl;
    // // std::cout << "d is " << d << std::endl;
    // std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    // std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    // std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    // std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    
    return 0; 
    }



    // int fixed = 10;
    // int save = roundf(fixed * (1<< 8));
    // // std::cout << "check : "<< save << std::endl;
    // save = (save >> 8);
    // std::cout << "check : "<< save << std::endl;