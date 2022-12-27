/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:55:05 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/27 09:48:06 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed{

    private:
    int number;//to store the fixed-point number value !!
    static const int fractional = 8;//to store the number of fractional bits
    public:
    Fixed();
    Fixed(Fixed& obj);
    // Fixed& operator=(Fixed& ref_obj); 
    void operator=(Fixed& ref_obj); // ==>the both worked
    ~Fixed();
    int getRawBits(void) const;// A read-only function
    void setRawBits(int const raw);
};

#endif