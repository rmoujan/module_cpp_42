/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:27:51 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 09:59:01 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*   zombieHorde( int N, std::string name )
{
    Zombie *z;
    int i;
    if (N <= 0)
    {
       z = NULL;
       std::cout<<"\033[31m ***** Please Enter a Valid number of Zombies to be created ***\033[0m"<<std::endl; 
       return (z);
    }
    else
    {
        z = new Zombie[N];
    }
    
    i = 0;
    while (i < N)
    {
        z[i].setName(name);
        i++;
    }
    return (z);
}