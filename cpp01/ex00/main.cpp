/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:25:59 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/07 13:52:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // std::string  str = "AMAL";
    Zombie *z = newZombie("AMAL");
    Zombie *z2 = newZombie("faty");
    
    // z.setName("Reshe");
    //this not call o constructor and destructor
    z->announce();
    z2->announce();
    
    //this call the instructor and destructor implicitly
    // randomChump("layla");
    // randomChump("resha");
    // while (1);
    //when u declare an object using new , u must free it using delete
    delete z;
    delete z2;
    return (0);
}