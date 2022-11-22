/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:10:56 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 10:18:48 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string value,  Weapon *objvalue)
{
    name = value;
     obj=objvalue;
    // std::cout <<"the object of HumanA has been created by constructor by parameter"<<std::endl;
}

void HumanA::setName(std::string value)
{
    name = value;
}

void HumanA::setObj(Weapon *value)
{
    obj = value;
}

std::string HumanA::getName()
{
    return (name);
}

Weapon* HumanA::getObj()
{
    return (obj);
}

void HumanA::attack()
{
    std::cout<<getName()<<" attack with their "<<getObj()->getType()<<std::endl;
}

HumanA :: ~HumanA()
{
    // std::cout<<"the object has name "<<getName()<<" is destroyed by destructor"<<std::endl;
}




// HumanA::HumanA(std::string value, Weapon *objvalue)
// {
//     name = value;
//     obj = objvalue;
//     // std::cout <<"the object of HumanA has been created by constructor by parameter"<<std::endl;
// }

// void HumanA::setName(std::string value)
// {
//     name = value;
// }

// void HumanA::setObj(Weapon *value)
// {
//     obj = value;
// }

// std::string HumanA::getName()
// {
//     return (name);
// }

// Weapon* HumanA::getObj()
// {
//     return (obj);
// }

// void HumanA::attack()
// {
//     std::cout<<getName()<<" attack with their "<<getObj()->getType()<<std::endl;
// }

// HumanA :: ~HumanA()
// {
//     // std::cout<<"the object has name "<<getName()<<" is destroyed by destructor"<<std::endl;
// }