/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:06:06 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 21:24:45 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//create a new Zombie and return it !!
Zombie* newZombie(std::string name)
{
    Zombie *z = new Zombie();
    z->setName(name);
    return (z);
}
