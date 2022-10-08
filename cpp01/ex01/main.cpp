/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:16 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 16:06:51 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(3, "Reshe");
    std::string str;
    int  i = 0;
    
    while (i < 3)
    {
        z[i].announce();
        i++;
    }
    i = 0;
    //giving each object name using getline !!
    while (i < 3)
    {
        getline(std::cin, str);
        z[i].setName(str);
        i++;
    }
    i = 0;
    //outputing the objects 
    while (i < 6)
    {
        z[i].announce();
        i++;
    }
    // std::cout<<"hallo "<<z[1].getName()<<std::endl;
    delete []z;
    return (0);
}