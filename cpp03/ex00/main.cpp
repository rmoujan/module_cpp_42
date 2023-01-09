/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 14:15:59 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj("Reshe");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.attack("Rima");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    obj.attack("Rima");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.attack("Rima");
    obj.attack("Rima");
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    obj.beRepaired(20);
    std::cout << "Name           == "<<obj.getName()<<std::endl;
    std::cout << "Hit Points     == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage  == "<<obj.getAttDamage()<<std::endl;
    return (0);
}