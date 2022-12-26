/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:16:22 by rmoujan           #+#    #+#             */
/*   Updated: 2022/12/16 14:52:06 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{
    std::cout <<"\033[92m Default Constructor Invoked \033[0m "<<std::endl;
}

Zombie :: ~Zombie()
{
    std::cout <<"\033[92m the Object has name "<<this->getName()<<" is destroyed by destructor  \033[0m "<<std::endl;
}

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