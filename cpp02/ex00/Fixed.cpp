/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:10:29 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/24 16:26:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
     number = 0;
}

Fixed::Fixed(Fixed& obj)
{
    std::cout<<" Copy Constructor called "<<std::endl;
}

Fixed& Fixed :: operator=(Fixed& ref_obj)
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    return ref_obj;
}

int Fixed :: getRawBits(void)const
{
    std::cout<<" getRawBits member function called "<<std::endl;
    return (number);
}

Fixed :: ~Fixed()
{
    std::cout <<" Destructor called"<<std::endl;
}