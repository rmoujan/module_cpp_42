/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/17 10:48:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap obj1;
    FragTrap obj2;
    ScavTrap obj3;
    obj1.attack("1111");
    obj2.attack("2222");
    obj3.attack("4444");

    // std::cout << "Test Inheritance "<< std::endl;
    // FragTrap obj("Reshe");
    // std::cout << "Name           == "<<obj.getName()<<std::endl;
    // std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    // std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    // std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    // obj.attack("Rima");
    // std::cout << "Name           == "<<obj.getName()<<std::endl;
    // std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    // std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    // std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    // FragTrap copy("TEST");
    // copy.beRepaired(800);
    // std::cout << "Name           == "<<obj.getName()<<std::endl;
    // std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    // std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    // std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    // obj.highFivesGuys();
    // obj = copy;
    // std::cout << "Name           == "<<obj.getName()<<std::endl;
    // std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    // std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    // std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
}