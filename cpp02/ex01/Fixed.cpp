/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:11:37 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/27 18:57:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
    number = 0;
}

Fixed::Fixed(Fixed& obj)//const
{
    std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj); //calling the assignement operator 
}

Fixed :: Fixed(const int value)
{
    //do some operations 
    std::cout<<"Int constructor called"<<std::endl;
}

Fixed :: Fixed(const float value)
{
    //do some operations 
    std::cout<<"Float constructor called"<<std::endl;
}

Fixed& Fixed :: operator=(Fixed& ref_obj)//const
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    this->number = ref_obj.getRawBits();
    return *this;
}

float Fixed :: toFloat(void) const{
    
    return ();
}
int Fixed :: toInt(void) const{
    return ();
}

int Fixed :: getRawBits(void)const
{
    return (number);
}

void Fixed :: setRawBits(int const raw){
    number = raw;
}

std::ostream & operator << (std::ostream & o, Fixed const & obj){
    //do work
}

//overload insertion << operator :
std::ostream & :: operator << (std :: ostream &o, Fixed const &obj)
{
    o<<obj.toFloat();
    return o;
}

Fixed :: ~Fixed()
{
    std::cout <<"Destructor called"<<std::endl;
}