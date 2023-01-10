/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:22 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/10 11:43:22 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"Default constructor of FragTrap has been invoked "<<std::endl;
    hit_points = 100;
    energy_points = 100;
    att_damage = 30;
}

FragTrap::FragTrap(std::string value)
{
    std::cout <<"Constructor by parameter of FragTrap has been invoked "<<std::endl;
    this->name = value;
    hit_points = 100;
    energy_points = 100;
    att_damage = 30;
}

FragTrap :: ~FragTrap()
{
    std::cout <<"Destructor of FragTrap has been invoked "<<std::endl;
}

void FragTrap :: attack(const std :: string & target)
{
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        std::cout << "\033[92mFragTrap "<<getName()<<" attacks "<<target<<", causing "<<getAttDamage()<< " points of damage !\033[0m"<<std::endl; 
        this->energy_points = this->energy_points  - 1;
    }
    else
        std::cout <<"\033[31mU cannot do anything, cuz u don't have hit points or energy points \033[0m"<<std::endl;
}


void FragTrap :: highFivesGuys(void)
{
    std::cout<< "FragTrap ???" <<std::endl;
}