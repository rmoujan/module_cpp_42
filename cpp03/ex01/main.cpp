/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:49 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/10 18:59:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{

    std::cout << "Test Inheritance "<< std::endl;
    ScavTrap obj("Reshe");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.attack("Rima");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    ScavTrap copy("TEST");
    copy.beRepaired(800);
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj = copy;
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
}