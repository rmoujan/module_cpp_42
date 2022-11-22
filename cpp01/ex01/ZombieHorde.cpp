/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:27:51 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 15:17:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*   zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];
    int i;
    
    i = 0;
    while (i < N)
    {
        z[i].setName(name);
        i++;
    }
    return (z);
}