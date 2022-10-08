/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:06:40 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 15:18:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creating const
Zombie :: Zombie()
{
    std::cout << "Default Constructor Invoked"<<std::endl;
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

//creating deconst
Zombie :: ~Zombie()
{
    // std::cout << "Default Destructor Invoked"<<std::endl;
    std::cout << "the Object has name "<<this->getName()<<" is destroyed"<<std::endl;
}