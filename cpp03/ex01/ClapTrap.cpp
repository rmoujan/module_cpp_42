/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:44 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 16:12:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout <<"Default constructor of ClapTrap has been invoked "<<std::endl;
    hit_points = 10;
    energy_points = 10;
    att_damage = 0;
}

ClapTrap::ClapTrap(std::string value)
{
    std::cout <<"Constructor by parameter of ClapTrap has been invoked "<<std::endl;
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
    std::cout <<"copt assignment operator has been invoked "<<std::endl;
    this->name = ref.name;
    this->hit_points = ref.hit_points;
    this->energy_points = ref.energy_points;
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
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        std::cout << "\033[92mClapTrap "<<getName()<<" attacks "<<target<<", causing "<<getAttDamage()<< " points of damage !\033[0m"<<std::endl; 
        this->energy_points = this->energy_points  - 1;
    }
    else
        std::cout <<"\033[31mU cannot do anything, cuz u don't have hit points or energy points \033[0m"<<std::endl;
}

void ClapTrap :: takeDamage(unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->hit_points = this->hit_points - amount; 
        std::cout <<"\033[92mLosing Hit Points \033[0m"<<std::endl;  
    }
    else
        std::cout <<"\033[31mU cannot do anything, cuz u don't have hit points or energy points \033[0m"<<std::endl;
}


void ClapTrap :: beRepaired(unsigned int amount)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        this->hit_points = this->hit_points + amount; 
        this->energy_points = this->energy_points - 1;
        std::cout <<"\033[92mRepairing Hit Points \033[0m"<<std::endl;    
    }
    else
        std::cout <<"\033[31mU cannot do anything, cuz u don't have hit points or energy points \033[0m"<<std::endl;
}

