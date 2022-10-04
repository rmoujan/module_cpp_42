/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:16:22 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/04 09:31:16 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//print the name of  Zombie :
void Zombie :: announce(void)
{
    std::cout <<getName()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie :: setName(std::string n)
{
    name = n;
}

//create a new Zombie and return it !!
Zombie* Zombie :: newZombie( std::string name )
{
    Zombie *z;
    z->setName(name);
    return (z);
}

//It creates a zombie, name it, and the zombie announces itself:
void Zombie :: randomChump( std::string name )
{
    Zombie z;
    z.setName(name);
    z.announce();
}