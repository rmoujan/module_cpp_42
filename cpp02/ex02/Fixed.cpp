/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:43:36 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/05 21:00:28 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout <<" Default constructor called"<<std::endl;
    this->integer = 0;
}

Fixed::Fixed(const Fixed& obj)
{
    // std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj);
}

Fixed& Fixed ::  operator=(const Fixed &ref)
{
    // std::cout<<" Copy assignment operator called "<<std::endl;
    this->integer = ref.getinteger();
    return (*this);
}

Fixed :: Fixed(const int value)
{
    // std::cout<<"Int constructor called"<<std::endl;
    integer = value << fractional; // integer = value * (256 == 2^8 == (<< fractinal))
}


Fixed :: Fixed(const float value)
{
    // std::cout<<"Float constructor called"<<std::endl;
    integer = roundf((value) * (1 << fractional)); // (value) * (256)
    // std::cout<<"from const copy  "<<integer<<std::endl;
}

float Fixed :: toFloat(void) const{

    return (float(integer) / (1 << fractional)); // float(integer) / (256) || / (2^8)
}

int Fixed :: toInt(void) const{
    return (integer >> fractional); // integre / 256 || integer / (2^8)
}

Fixed :: ~Fixed()
{
    // std::cout <<"Destructor called"<<std::endl;
}

int Fixed:: getinteger()const
{
    return (integer);
}

void Fixed::  setinteger(int value)
{
    this->integer = value;
}

bool Fixed :: operator == (Fixed& obj1)
{
    if (this->getinteger() == obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

bool Fixed :: operator < (Fixed& obj1)
{
    if (this->getinteger() < obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

bool Fixed :: operator > (Fixed& obj1)
{
    if (this->getinteger() > obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

bool Fixed :: operator >= (Fixed& obj1)
{
    if (this->getinteger() >= obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

bool Fixed :: operator <= (Fixed& obj1)
{
    if (this->getinteger() <= obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

bool Fixed :: operator != (Fixed& obj1)
{
    if (this->getinteger() != obj1.getinteger())
    {
        return (1);
    }
    return (0);
}

Fixed Fixed::operator + (const Fixed &ref)const
{
    Fixed new_obj;

    new_obj.integer = this->integer + ref.getinteger();
    return (new_obj);
}

Fixed Fixed::operator - (const Fixed &ref)const
{
    Fixed new_obj;

    new_obj.integer = this->integer - ref.getinteger();
    return (new_obj);
}

Fixed Fixed::operator * (const Fixed &ref)
{
    Fixed new_obj;
    new_obj.integer = this->integer * ref.getinteger();
    new_obj.integer = new_obj.integer  / (1 << fractional);
    return (new_obj);
}

Fixed Fixed::operator / (const Fixed &ref)const
{
    Fixed new_obj;
    //must ref.getinteger() != zero
    if (ref.getinteger() != 0)
    {
        new_obj.integer = this->integer / ref.getinteger();
        new_obj.integer = new_obj.integer << new_obj.fractional;
    }
    else
        new_obj.integer = 0;
    return (new_obj);
}

Fixed& Fixed :: operator++()
{
    (this->integer)++;
    return (*this);
}

Fixed& Fixed :: operator--()
{
    (this->integer)--;
    return (*this);
}

Fixed Fixed :: operator++(int)
{
    Fixed temp = *this;
    ++(*this);
    return temp;
}



Fixed Fixed :: operator--(int )
{
    Fixed temp = *this;
    (this->integer)--;
    return temp;
}

Fixed& Fixed :: min(Fixed& obj1,Fixed& obj2)
{
    if (obj1.getinteger() < obj2.getinteger())
        return (obj1);
    else
        return (obj2);
}

const Fixed& Fixed :: min(const Fixed& obj1,const Fixed& obj2)
{
    if (obj1.getinteger() < obj2.getinteger())
        return (obj1);
    else
        return (obj2);
}

Fixed& Fixed :: max(Fixed& obj1,Fixed& obj2)
{
    if (obj1.getinteger() > obj2.getinteger())
        return (obj1);
    else
        return (obj2);
}

const Fixed& Fixed :: max(const Fixed& obj1,const Fixed& obj2)
{
    if (obj1.getinteger() > obj2.getinteger())
        return (obj1);
    else
        return (obj2);
}

std::ostream& operator<<(std::ostream& COUT, const Fixed& obj)
{
    COUT<<obj.toFloat();
    return COUT;
}


