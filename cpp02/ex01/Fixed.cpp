/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:11:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/01 00:52:29 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed :: Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
    this->integer = 0;
}

Fixed::Fixed(Fixed& obj)//const
{
    std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj); //calling the assignement operator 
}

Fixed :: Fixed(const int value)
{
    //do some operations 
    int save;
    save = value << fractional;
    this->integer = save >> fractional;
    std::cout<<"Int constructor called"<<std::endl;
}

// Fixed :: Fixed(const float value)
// {
//     //do some operations 
//     std::cout<<"Float constructor called"<<std::endl;
// }

Fixed& Fixed :: operator=(Fixed& ref_obj)//const
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    this->integer = ref_obj.getRawBits();
    return *this;
}

// float Fixed :: toFloat(void) const{
    
//     return ();
// }

// int Fixed :: toInt(void) const{
//     return ();
// }

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
    COUT<<rhs.getRawBits();
    return (COUT);
}

Fixed :: ~Fixed()
{
    std::cout <<"Destructor called"<<std::endl;
}