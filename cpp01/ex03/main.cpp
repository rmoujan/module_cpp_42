/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:55:11 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/17 20:33:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

// NOTE: maky3tinih nefs result li bghaw homa !!!!!
int main() {
      
    Weapon  club = Weapon("crude spiked club");
    // std::cout<<club.getType()<<std::endl;
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    // std::cout<<club.getType();
    // HumanA kok("reshe", club);
    bob.attack();
    // kok.attack();
// Weapon club1 = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.setObj(club1);
// jim.attack();
// club.setType("some other type of club");
// jim.attack();
// while (1);
// Weapon  club = Weapon("crude spiked club");
// HumanB jim("Jim");
// jim.setWeapon(club);
// jim.attack();
// club.setType("some other type of club");
// jim.attack();

    return (0);
}