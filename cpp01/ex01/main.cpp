/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:16 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/13 15:04:54 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout <<"\033[31m ***** Create 3 Object using zombieHorde ***\033[0m"<<std::endl;
    Zombie *z = zombieHorde(3, "Reshe");
    std::string str;
    int  i = 0;
    std::cout <<"\033[31m ***** Announicing 3 Object  ***\033[0m"<<std::endl;

    while (i < 3)
    {
        z[i].announce();
        i++;
    }
    i = 0;
    std::cout <<"\033[31m ***** Updating Names of 3 Object ***\033[0m"<<std::endl;

    while (i < 3)
    {
        std::cout <<"\nEnter ur name :: ";
        getline(std::cin, str);
        z[i].setName(str);
        i++;
    }
    i = 0;
    std::cout <<"\n \033[31m ***** Updating Names of 3 Object ***\033[0m"<<std::endl<<std::endl;
    while (i < 3)
    {
        z[i].announce();
        i++;
    }
    std::cout <<"the first object has the name :: "<<z[2].getName()<<std::endl;
    delete []z;
    return (0);
}