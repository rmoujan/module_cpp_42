/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/14 16:45:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    std::cout << "Test Multiple Inheritance "<< std::endl;
    DiamondTrap obj("Reshe");
    // DiamondTrap obj;
    obj.whoAmI();
    obj.attack("Rima");
    std::cout << "Name                    == "<<obj.DiamondTrap::getName()<<std::endl;
    std::cout << "Name of ClapTrap        == "<<obj.ClapTrap::getName()<<std::endl;
    std::cout << "Hit Points              == "<<obj.getHitPoints()<<std::endl;
    std::cout << "Energey Points          == "<<obj.getEnergyPoints()<<std::endl;
    std::cout << "Attack Damage           == "<<obj.getAttDamage()<<std::endl;//why give me 20 and not 30 !!!
}