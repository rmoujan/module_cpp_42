/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:31:49 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/14 16:43:11 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout <<"Default constructor of DiamondTrap has been invoked "<<std::endl;
    // FragTrap::hit_points= FragTrap::hit_points;
    ScavTrap::energy_points = this->ScavTrap::getEnergy_pts_ScavTrap();
    // FragTrap::att_damage = FragTrap::att_damage;
}

DiamondTrap::DiamondTrap(std::string diamond_name)
{
    std::cout <<"Constructor by parameter of DiamondTrap has been invoked "<<std::endl;
    this->name    = diamond_name;
    // hit_points    = this->FragTrap::getHitPoints();
    energy_points = this->ScavTrap::getEnergy_pts_ScavTrap();
    // att_damage    = this->FragTrap::getAttDamage();
}

//still need check
DiamondTrap::DiamondTrap(const DiamondTrap &ref)
{
    std::cout <<"Constructor by copy of DiamondTrap has been invoked "<<std::endl;
    *this = ref;
}

//still need check
DiamondTrap & DiamondTrap :: operator=(const DiamondTrap &ref)
{
    std::cout <<"copy assignment operator of DiamondTrap has been invoked "<<std::endl;
    this->name = ref.name;
    this->hit_points = ref.hit_points;
    this->energy_points = ref.energy_points;
    this->att_damage = ref.att_damage;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout <<"Destructor of DiamondTrap has been invoked "<<std::endl;
}

void DiamondTrap::whoAmI(void)
{
    std::string name_clap;
    name_clap = this->name + "_clap_name";
    ClapTrap::setName(name_clap);
    std::cout << "My Name is "<<this->name<<" And ClapTrap's Name is "<<name_clap<<std::endl;

}

void DiamondTrap:: attack(const std :: string& target)
{
    ScavTrap::attack(target);
}

std::string DiamondTrap :: getName()const{
    return (this->name);
}