/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:43:36 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 15:52:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed()
{
    std::cout <<" Default constructor called"<<std::endl;
    this->integer = 0;
}

Fixed::Fixed(Fixed& obj)
{
    std::cout<<" Copy Constructor called "<<std::endl;
    this->operator=(obj);
}

Fixed& Fixed ::  operator=(Fixed &ref)
{
    std::cout<<" Copy assignment operator called "<<std::endl;
    this->integer = ref.getinteger();
    return (*this);
}

Fixed :: ~Fixed()
{
    std::cout <<"Destructor called"<<std::endl;
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

Fixed Fixed::operator * (const Fixed &ref)const
{
    Fixed new_obj;

    new_obj.integer = this->integer * ref.getinteger();
    return (new_obj);
}

Fixed Fixed::operator / (const Fixed &ref)const
{
    Fixed new_obj;
    //must ref.getinteger() != zero
    new_obj.integer = this->integer / ref.getinteger();
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

std::ostream & operator<<(std::ostream& COUT, Fixed& obj)
{
    COUT<<obj.getinteger();
    return COUT;
}