/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:16:22 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/07 13:09:48 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creating const
Zombie :: Zombie()
{
    std::cout << "Default Constructor Invoked"<<std::endl;
}

//creating deconst
Zombie :: ~Zombie()
{
    // std::cout << "Default Destructor Invoked"<<std::endl;
    std::cout << "the Object has name "<<this->getName()<<" is destroyed"<<std::endl;
}
//print the name of  Zombie :
void Zombie :: announce(void)
{
    std::cout <<getName()<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie :: setName(std::string n)
{
    name = n;
}

std::string Zombie :: getName(void){
    
    return (name);
}