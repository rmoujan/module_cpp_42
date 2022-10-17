/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:28:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/17 20:17:32 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
    // std::cout <<"the object of HumanB has been created"<<std::endl;
}

HumanB::HumanB(std::string value)
{
    name = value;
    // std::cout <<"the object of HumanB has been created"<<std::endl;
}

void HumanB::setName(std::string value)
{
    name = value;
}

void HumanB::setObj(Weapon value)
{
    obj = value;
}

std::string HumanB::getName()
{
    return (name);
}

Weapon HumanB::getObj()
{
    return (obj);
}

void HumanB::attack()
{
    std::cout<<getName()<<" attack with their "<<getObj().getType()<<std::endl;
}