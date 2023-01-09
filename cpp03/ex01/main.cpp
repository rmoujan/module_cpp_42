/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:49 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 16:37:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
int main()
{

    std::cout << "Test Inheritance "<< std::endl;
    ScavTrap obj("Reshe");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
//     obj.attack("Rima");
//     std::cout << "Name           == "<<obj.getName()<<std::endl;
//     std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
//     std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
//     std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
}