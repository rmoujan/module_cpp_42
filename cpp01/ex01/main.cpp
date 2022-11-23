/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:16 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 09:02:25 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout <<"\033[31m ***** Create Objects using zombieHorde ***\033[0m"<<std::endl;
    Zombie *z = zombieHorde(5, "Reshe");
    if (z == NULL)
        return (0);
    std::string str;
    int  i = 0;
    std::cout <<"\033[31m ***** Announncing 3 Object  ***\033[0m"<<std::endl;
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
    delete []z;
    return (0);
}