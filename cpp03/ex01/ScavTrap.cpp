/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:54 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 17:33:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout <<"Default constructor of ClapTrap has been invoked "<<std::endl;
    hit_points = 100;
    energy_points = 50;
    att_damage = 20;
}

ScavTrap::ScavTrap(std::string value)
{
    std::cout <<"Constructor by parameter of ClapTrap has been invoked "<<std::endl;
    this->name = value;
    hit_points = 100;
    energy_points = 50;
    att_damage = 20;
}

void ScavTrap :: attack(const std :: string & target)
{
    std::cout << "target "<<target<<std::endl;
}

void ScavTrap :: guardGate()
{
    std::cout<< "ScavTrap is now in Gate keeper mode" <<std::endl;
}