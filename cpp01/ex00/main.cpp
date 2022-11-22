/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 08:25:59 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 14:55:36 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::cout <<"\033[31m ***** create Object using randomChump ***\033[0m"<<std::endl;
    std::cout<< "\033[34m *** Before Random Chump ***\033[0m"<<std::endl;
    randomChump("Katy");
    std::cout<< "\033[34m *** ||||| ***\033[0m"<<std::endl;
    randomChump("Reshe");
    std::cout<< "\033[34m *** After Random Chump ***\033[0m"<<std::endl;
    
    std::cout <<"\033[31m***** create Object using New Zombie *****\033[0m"<<std::endl;
    std::cout<< "\033[34m*** Before New Zombie  ***\033[0m"<<std::endl;
    Zombie *z = newZombie("AMAL");
    z->announce();
    Zombie *z2 = newZombie("faty");
    z2->announce();
    std::cout<< "\033[34m*** After New Zombie  ***\033[0m"<<std::endl;

    delete z2;
    delete z;
    return (0);
}