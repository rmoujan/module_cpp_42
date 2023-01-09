/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 12:48:46 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"Default constructor has been invoked "<<std::endl;
    hit_points = 10;
    energy_points = 10;
    att_damage = 0;
}

ClapTrap::ClapTrap(std::string value)
{
    std::cout <<"Constructor by parameter has been invoked "<<std::endl;
    this->name = value;
    hit_points = 10;
    energy_points = 10;
    att_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
    std::cout <<"copy constructor has been invoked "<<std::endl;
    *this = ref;
}

ClapTrap& ClapTrap ::  operator=(const ClapTrap & ref)
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
 
int ClapTrap :: getEnergyPoints()const
{
    return (this->energy_points);
}

int ClapTrap :: getAttDamage() const
{
    return (this->att_damage);
}

std::string ClapTrap :: getName() const
{
    return (this->name);
}

void ClapTrap :: setName(std::string value)
{
    this->name = value;
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
        this->att_damage = this->hit_points;
        std::cout <<"Losing Hit Points "<<std::endl;  
    }
    else
        std::cout <<"U cannot do anything, cuz u don't have hit points or energy points "<<std::endl;
}
//seems OK
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
