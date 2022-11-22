/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:55:11 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 11:44:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
{
    std::cout<<"\033[31m *** HUMAN A ***\033[0m"<<std::endl;
    Weapon  club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
}
{ 
    std::cout<<"\033[31m *** HUMAN B ***\033[0m"<<std::endl;
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setObj(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
}
    return (0);
}