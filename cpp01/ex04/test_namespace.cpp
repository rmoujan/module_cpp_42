/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_namespace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 09:45:44 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 10:45:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>

// int var = 5;
// namespace space1{
//     int var = 2;
// }
// namespace space2{
//     int var = 4;
// }
// //define an alias to an namspeace already exist
// namespace space3 = space1;
// int main()
// {
//     std::cout<<" var is "<<var<<std::endl;
//     std::cout<<" var is "<<space1::var<<std::endl;
//     std::cout<<" var is "<<space2::var<<std::endl;
//     std::cout<<" var is "<<space3::var<<std::endl;
        
// }


// CPP program to demonstrate working of string
// find to search a string
#include <iostream>
#include <string>
 
int main()
{
    std::string haystack = "It is like looking for a needle in a haystack";
    std::string needle = "needle";
 
    bool found = haystack.find(needle) != std::string::npos;
    std::cout <<haystack.find(needle)<<std::endl;
    if (found) {
        std::cout << "String found " <<found<< std::endl;
    }
    else {
        std::cout << "String not found " <<found<< std::endl;
    }
 
    return 0;
}