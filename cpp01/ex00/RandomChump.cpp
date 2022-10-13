/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:06:09 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/13 14:46:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//It creates a zombie, name it, and the zombie announces itself:
void randomChump(std::string name)
{
    Zombie z;
    z.setName(name);
    z.announce();
}