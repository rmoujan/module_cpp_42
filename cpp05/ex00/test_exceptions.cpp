/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_exceptions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:51:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/27 17:53:31 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    int f = 10;
    try
    {
        // Statements that may throw exceptions you want to handle go here
        if (f== 10)
            throw -1; // here's a trivial example
    }
    catch (exception e)
    {
        std::cout <<e;
        // Any exceptions of type int thrown within the above try block get sent here
      
}}
