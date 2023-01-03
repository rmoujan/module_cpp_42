/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 09:43:39 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 18:30:27 by rmoujan          ###   ########.fr       */
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
    Fixed(const Fixed& obj);
    Fixed(const int value); 
    Fixed (const float value);
    Fixed& operator=(const Fixed& ref_obj);
    ~Fixed();
    //member functions:
    int getinteger()const;
    void setinteger(int value);
    float toFloat(void) const;
    int toInt(void) const;
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
    
    //min max::
    static Fixed& min(Fixed& obj1, Fixed& obj2);
    static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
    //max 
    static Fixed& max(Fixed& obj1, Fixed& obj2);
    static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
};
//overloading oeprator of insertion :
std::ostream& operator<<(std::ostream& COUT, const Fixed& obj);



#endif