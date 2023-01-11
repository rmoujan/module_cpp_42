/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:31:49 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/11 13:49:41 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout <<"Default constructor of DiamondTrap has been invoked "<<std::endl;
    FragTrap::hit_points= FragTrap::hit_points;
    ScavTrap::energy_points = ScavTrap::energy_points;
    FragTrap::att_damage = FragTrap::att_damage;
}

DiamondTrap::DiamondTrap(std::string diamond_name, std::string clap_name):ClapTrap(clap_name)
{
    std::cout <<"Constructor by parameter of FragTrap has been invoked "<<std::endl;
    this->name = diamond_name;
    hit_points= FragTrap::hit_points;
    energy_points = ScavTrap::energy_points;
    att_damage = FragTrap::att_damage;
    // FragTrap::hit_points= FragTrap::hit_points;
    // ScavTrap::energy_points = ScavTrap::energy_points;
    // FragTrap::att_damage = FragTrap::att_damage;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "My Name is "<<name<<" And ClapTrap's Name is "<<ClapTrap::getName()<<std::endl;
}

void DiamondTrap:: attack(const std :: string& target)
{
    ScavTrap::attack(target);
}