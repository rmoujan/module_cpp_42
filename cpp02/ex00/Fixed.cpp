/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 11:10:29 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/26 15:45:41 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
    number = 0;
}

Fixed::Fixed( Fixed& obj)//const
{
    std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj);
}

//still not understand it !!
Fixed& Fixed :: operator=(Fixed& ref_obj)//const
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    this->number = ref_obj.getRawBits();
    return *this;
}

int Fixed :: getRawBits(void)const
{
    std::cout<<" getRawBits member function called "<<std::endl;
    return (number);
}
void Fixed :: setRawBits(int const raw){
    number = raw;
}

Fixed :: ~Fixed()
{
    std::cout <<" Destructor called"<<std::endl;
}