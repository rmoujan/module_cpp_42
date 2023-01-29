/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_exceptions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:51:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/29 11:55:33 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

using namespace std;


int AddPositiveIntegers(int a, int b)
{
    if (a < 0 || b < 0)
        throw std::invalid_argument("AddPositiveIntegers arguments must be positive");

    return (a + b);
}

int main()
 {
    try
    {
        cout << AddPositiveIntegers(1, 2);
        cout<<" --------------------- "<<std::endl;
    }

    catch (std::invalid_argument& e)
    {
        std::cout <<"catch exceptions "<<std::endl;
    }


        cout <<"AFETR THROWING AN EXCEPTION"<<std::endl;
        return -1;

}
