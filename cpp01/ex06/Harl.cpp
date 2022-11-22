/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 12:43:12 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl  :: debug(void)
{
    std::cout <<"\033[34m[DEBUG] \033[0m"<<std::endl;
    std::cout <<" I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"<<std::endl;
}

void Harl :: info(void)
{
    std::cout <<"\033[34m[INFO] \033[0m"<<std::endl;
    std::cout <<" I cannot believe adding extra bacon costs more money"<<std::endl;
    std::cout <<" You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"<<std::endl;
 
}

void Harl :: warning(void)
{
    std::cout <<"\033[34m[WARNING] \033[0m"<<std::endl;
    std::cout <<" I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout <<" I've been coming for years whereas you started working here since last month"<<std::endl;
}

void Harl :: error(void)
{
    std::cout<<"\033[34m[ERROR] \033[0m"<<std::endl;
    std::cout<<" This is unacceptable ! I want to speak to the manager now."<<std::endl;
}

void Harl :: complain(std::string level)
{
    string tab[4];
    tab[0]= "DEBUG";
    tab[1]= "INFO";
    tab[2]= "WARNING";
    tab[3]= "ERROR";
    int i;
    i = 0;
    while (i < 4)
    {
        if (level.compare(tab[i]) == 0)
        {
            break;
        }
        i++;
    }
    switch(i){
    case 0:
        debug();
    case 1:
        info();
    case 2:
        warning();
    case 3:
        error();
    default:
        std::cout<<"\033[31m this choice doesn't exist \033[0m"<<std::endl;
    }  
}