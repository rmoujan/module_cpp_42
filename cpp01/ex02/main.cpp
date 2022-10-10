/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:06:58 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 18:51:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    char *str = "HI THIS IS BRAIN";
    char *stringPTR = str;
    char*& stringREF = str;

    std::cout <<"|| OUTPUTING THE MEMORY ADDRESS ||"<<std::endl;
    std::cout <<"***********************************"<<std::endl<<std::endl;
    std::cout<< "The memory address of the string variable ::: "<<static_cast<void*>(str)<<std::endl;
    std::cout<< "The memory address held by stringPTR      ::: "<<static_cast<void*>(stringPTR)<<std::endl;
    std::cout<< "The memory address held by stringREF      ::: "<<static_cast<void*>(stringREF)<<std::endl<<std::endl;

    std::cout <<"|| OUTPUTING THE VALUES ||"<<std::endl;
    std::cout <<"***********************************"<<std::endl<<std::endl;
    std::cout<< "The memory address of the string variable ::: "<<str<<std::endl;
    std::cout<< "The memory address held by stringPTR      ::: "<<stringPTR<<std::endl;
    std::cout<< "The memory address held by stringREF      ::: "<<stringREF<<std::endl;

    return 0;
}