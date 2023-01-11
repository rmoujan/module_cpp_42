/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:54 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/11 20:29:05 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"Default constructor of ScavTrap has been invoked "<<std::endl;
    hit_points = 100;
    energy_points = 50;
    att_damage = 20;
}

ScavTrap::ScavTrap(std::string value)
{
    std::cout <<"Constructor by parameter of ScavTrap has been invoked "<<std::endl;
    this->name = value;
    hit_points = 100;
    energy_points = 50;
    att_damage = 20;
}

ScavTrap :: ScavTrap(const ScavTrap &ref)
{
    std::cout <<"Constructor by copy of ScavTrap has been invoked "<<std::endl;
    *this= ref;
}

ScavTrap& ScavTrap :: operator=(const ScavTrap &ref)
{
    std::cout <<"copy assignment operator of ScavTrap has been invoked "<<std::endl;
    this->name = ref.name;
    this->hit_points = ref.hit_points;
    this->energy_points = ref.energy_points;
    this->att_damage = ref.att_damage;
    return (*this);
}

ScavTrap :: ~ScavTrap()
{
    std::cout <<"Destructor of ScavTrap has been invoked "<<std::endl;
}

void ScavTrap :: attack(const std :: string & target)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        std::cout << "\033[92mScavTrap "<<getName()<<" attacks "<<target<<", causing "<<getAttDamage()<< " points of damage !\033[0m"<<std::endl; 
        this->energy_points = this->energy_points  - 1;
    }
    else
        std::cout <<"\033[31mU cannot do anything, cuz u don't have hit points or energy points \033[0m"<<std::endl;
}


void ScavTrap :: guardGate()
{
    std::cout<< "ScavTrap is now in Gate keeper mode" <<std::endl;
}