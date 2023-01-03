/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_post.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:54:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/03 16:10:10 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





class Digit
{
public:
    int m_digit;
public:
    Digit(int digit=0)
    {
        m_digit=digit;
    }

    Digit& operator++(); // prefix has no parameter

    Digit operator++(int); // postfix has an int parameter

    friend std::ostream& operator<< (std::ostream& out, const Digit& d);
};

// No parameter means this is prefix operator++
Digit& Digit::operator++()
{
    // If our number is already at 9, wrap around to 0
    if (m_digit == 9)
        m_digit = 0;
    // otherwise just increment to next number
    else
        ++m_digit;

    return *this;
}

// int parameter means this is postfix operator++
Digit Digit::operator++(int)
{
    // Create a temporary variable with our current digit
    Digit temp{*this};

    // Use prefix operator to increment this digit
    ++(*this); // apply operator

    // return temporary result
    return temp; // return saved state
}


std::ostream& operator<< (std::ostream& out, const Digit& d)
{
	out << d.m_digit;
	return out;
}

#include <iostream>
int main()
{
    Digit digit(5);

    std::cout << digit;
    std::cout << ++digit; // calls Digit::operator++();
    std::cout << digit++; // calls Digit::operator++(int);
    std::cout << digit;

    return 0;
}