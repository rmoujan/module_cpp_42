/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 11:56:10 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap obj;
    std::cout << obj.getHitPoints()<<std::endl;
    std::cout << obj.getEnergyPoints()<<std::endl;
    std::cout << obj.getAttDamage()<<std::endl;
    std::cout << obj.getName()<<std::endl;
    
    return (0);
}