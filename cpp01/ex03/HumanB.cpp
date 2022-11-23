/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:28:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 13:03:28 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string value)
{
    name = value;
    this->obj = NULL;
}

void HumanB::setName(std::string value)
{
    name = value;
}

void HumanB::setWeapon(Weapon &value)
{
    obj = &value;
}

std::string HumanB::getName()
{
    return (name);
}

Weapon* HumanB::getObj()
{
    return (obj);
}

void HumanB::attack()
{
    if (this->obj)
        std::cout<<getName()<<" attack with their "<<getObj()->getType()<<std::endl;
}

HumanB :: ~HumanB()
{
}