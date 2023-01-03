/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:43:39 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 15:51:09 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed{
    private:
    int integer;
    static const int fractional  = 8;

    public:
    //const:
    Fixed();
    Fixed(Fixed& ref);
    Fixed& operator=(Fixed& obj);
    ~Fixed();
    //member functions:
    int getinteger()const;
    void setinteger(int value);

    //overloading operators of comparison :

    bool operator == (Fixed& obj1);
    bool operator < (Fixed& obj1);
    bool operator > (Fixed& obj1);
    bool operator >= (Fixed& obj1);
    bool operator <= (Fixed& obj1);
    bool operator != (Fixed& obj1);

    //overloading operators of arithmetic :
    Fixed operator+(const Fixed& ref)const;
    Fixed operator-(const Fixed& ref)const;
    Fixed operator*(const Fixed& ref)const;
    Fixed operator/(const Fixed& ref)const;
    
    //the 4 increment :
    
    Fixed& operator--();
    Fixed& operator++();//prefix
    
    Fixed operator++(int);   //postfixe:
    Fixed operator--(int);
};
//overloading oeprator of insertion :
std::ostream& operator<<(std::ostream& COUT, Fixed& obj);



#endif