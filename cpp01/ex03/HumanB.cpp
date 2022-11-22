/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:28:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 11:39:44 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string value)
{
    name = value;
}

void HumanB::setName(std::string value)
{
     name = value;
}

void HumanB::setObj(Weapon &value)
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
    std::cout<<getName()<<" attack with their "<<getObj()->getType()<<std::endl;
}

HumanB :: ~HumanB()
{
}