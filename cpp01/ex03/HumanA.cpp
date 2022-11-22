/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:10:56 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 11:35:07 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string value,  Weapon& objvalue):obj(objvalue)
{
    name = value;
}

void HumanA::setName(std::string value)
{
    name = value;
}

std::string HumanA::getName()
{
    return (name);
}

Weapon HumanA::getObj()
{
    return (obj);
}

void HumanA::attack()
{
    std::cout<<getName()<<" attack with their "<<getObj().getType()<<std::endl;
}

HumanA :: ~HumanA()
{
}
