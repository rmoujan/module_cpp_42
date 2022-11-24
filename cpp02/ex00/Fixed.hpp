/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:55:05 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/24 11:09:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>


class Fixed{
    private:
    int number;
    static const int fractional = 8;
    public:
    Fixed();
    Fixed(Fixed& obj);
    Fixed& operator=(Fixed& ref_obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif