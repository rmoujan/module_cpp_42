/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:44 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 11:40:56 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
    std::cout <<"Default constructor has been invoked "<<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    std::cout <<"copy constructor has been invoked "<<std::endl;
    *this = ref;
}

ClapTrap& ClapTrap ::  operator=(ClapTrap & ref)
{
    this->name = ref.name;
    this->hit_points = ref.hit_points;
    this->energy_points = ref.hit_points;
    this->att_damage = ref.att_damage;
    return (*this);
} 

ClapTrap::~ClapTrap()
{
    std::cout <<"Destructor has been invoked "<<std::endl;
}

int ClapTrap :: getHitPoints() const
{
    return (this->hit_points);
}
 
int getEnergyPoints() const
{
    return (this->energy_points);
}

int getAttDamage() const
{
    return (this->att_damage);
}

std::string getName() const
{
    return (name);
}
void ClapTrap :: attack(const std :: string & target)
{
    std::cout << "ClapTrap "<<getName()<<" attacks "<<target<<", causing "<<getAttDamage()<< " points of damage !"<<std::endl; 
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->hit_points = this->hit_points - amount; 
        this->energy_points = this->energy_points  - 1;
        this->att_damage = this->att_damage + 1;
        std::cout <<"Losing Hit Points "<<std::endl;  
    }
    else
        std::cout <<"U cannot do anything, cuz u don't have hit points or energy points "<<std::endl;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->hit_points = this->hit_points + amount; 
        this->energy_points = this->energy_points  + 1;
        std::cout <<"Repairing Hit Points "<<std::endl;    
    }
    else
        std::cout <<"U cannot do anything, cuz u don't have hit points or energy points "<<std::endl;
}
