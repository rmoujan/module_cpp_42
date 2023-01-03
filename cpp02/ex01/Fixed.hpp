/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:11:41 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 09:05:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP 
# define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed{

    private:
    
    int integer;//to store the fixed-point number value !!
    static const int fractional = 8;//to store the number of fractional bits

    public:

    //constructors :
    Fixed();
    Fixed(const Fixed& obj);
    Fixed(const int value); 
    Fixed (const float value);
    Fixed& operator=(const Fixed& ref_obj);
    
    //member functions :
    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;// A read-only function
    void setRawBits(int const raw);
    //destructor :
    ~Fixed();
};

std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs);

#endif