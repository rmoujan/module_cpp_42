/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:49:00 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 10:08:45 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string value)
{
    type = value;
}

std::string const & Weapon ::getType()//const
{
    return this->type;
}

void Weapon :: setType(std::string value)
{
    type = value;
}

Weapon::~Weapon()
{
}

