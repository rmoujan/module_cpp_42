/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/10 11:48:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{

    std::cout << "Test Inheritance "<< std::endl;
    FragTrap obj("Reshe");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.attack("Rima");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    FragTrap copy("TEST");
    copy.beRepaired(800);
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.highFivesGuys();
    obj = copy;
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
}