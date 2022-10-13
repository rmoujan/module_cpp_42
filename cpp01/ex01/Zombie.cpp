/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:06:40 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/13 14:54:47 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{
    std::cout << "\033[92m Default Constructor Invoked \033[0m "<<std::endl;
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

Zombie :: ~Zombie()
{
    std::cout << "\033[92m the Object has name "<<this->getName()<<" is destroyed by destructor  \033[0m "<<std::endl;
}