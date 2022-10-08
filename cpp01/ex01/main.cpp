/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:16 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 15:38:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(6, "Reshe");
    std::string str;
    int  i = 0;
    //giving each object name using getline !!
    while (i < 6)
    {
        getline(std::cin, str);
        z[i].setName(str);
        i++;
    }
    i = 0;
    //outputing the objects 
    while (i < 6)
    {
        // getline(std::cin, str);
        z[i].announce();
        i++;
    }
    delete [] z;
    return (0);
}