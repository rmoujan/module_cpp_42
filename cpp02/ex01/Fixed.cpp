/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:11:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 18:19:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
    this->integer = 0;
}

Fixed::Fixed(const Fixed& obj)//const
{
    std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj); //calling the assignement operator 
}

Fixed :: Fixed(const int value)
{
    std::cout<<"Int constructor called"<<std::endl;
    integer = value << fractional; // integer = value * (256 == 2^8 == (<< fractinal))
}


Fixed :: Fixed(const float value)
{
    std::cout<<"Float constructor called"<<std::endl;
    integer = roundf((value) * (1 << fractional)); // (value) * (256)
}


Fixed& Fixed :: operator=(const Fixed& ref_obj)//const
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    this->integer = ref_obj.getRawBits();
    return *this;
}

float Fixed :: toFloat(void) const{
    
    return (float(integer) / (1 << fractional)); // float(integer) / (256) || / (2^8)
}

int Fixed :: toInt(void) const{
    return (integer >> fractional); // integre / 256 || integer / (2^8)
}

//return the number of class
int Fixed :: getRawBits(void)const
{
    return (integer);
}

//set the number of class by param
void Fixed :: setRawBits(int const raw){
    integer = raw;
}

// overload insertion << operator :
std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs){
    COUT<<rhs.toFloat();
    return (COUT);
}

Fixed :: ~Fixed()
{
    std::cout <<"Destructor called"<<std::endl;
}