/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:49:00 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 18:12:49 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    //  std::cout<<"an object Weapon has been created by constructor by default"<<std::endl;
}

Weapon::Weapon(std::string value)
{
    type = value;
    // std::cout<<"an object Weapon has been created by constructor paramter"<<std::endl;
}

std::string const & Weapon ::getType()
{
    std::string const &typeREF = type;
    return type;
}

void Weapon :: setType(std::string value)
{
    // std::cout <<"set type of is invoked"<<std::endl;
    type = value;
}

Weapon::~Weapon()
{
    //  std::cout<<"the object has name "<<getType()<<" is destroyed by destructor"<<std::endl;
}

