/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:27:51 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/19 17:23:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Creating . See first we declared a pointer then we assigned that to 
the new Rectangle then an object will be created in the heap memory.
Rectangle *q = new Rectangle();
*/
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