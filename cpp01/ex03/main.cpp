/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:55:11 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 16:58:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {

    //pointer to weapon it's worked::

    std::cout<<"*** HUMAN A ***"<<std::endl;
    Weapon  club1 = Weapon("crude spiked club");
    HumanA bob("Bob", club1);
    bob.attack();
    club1.setType("some other type of club");
    bob.attack();
    
    //end case pointer
        //ref to weapon  does not work ::
        // Weapon  club = Weapon("crude spiked club");
        // HumanA bob("Bob", &club);
        // bob.attack();
        // club.setType("some other type of club");
        // bob.attack();
    //end case of ref
        
    // //Second example :
    // std::cout<<"*** HUMAN B ***"<<std::endl;
    // Weapon club2 = Weapon("crude spiked club");
    // HumanB jim("Jim");
    // jim.setObj(&club2);
    // jim.attack();
    // club2.setType("some other type of club");
    // jim.attack();
    //end example
    return (0);
}