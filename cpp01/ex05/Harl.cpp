/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 14:45:00 by rmoujan          ###   ########.fr       */
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
    typedef void (Harl :: *ptr)(void);
    ptr tab[4];
    std::string data[4];
    int i = 0;

    data[0]= "DEBUG";
    data[1]= "INFO";
    data[2]= "WARNING";
    data[3]= "ERROR";

    while (i < 4)
    {
        if(level.compare(data[i]) == 0)
        {
            break;
        }
        i++;
    }

    tab[0]=&Harl::debug;
    tab[1]=&Harl::info;
    tab[2]=&Harl::warning;
    tab[3]=&Harl::error;
   if (i >= 0 && i < 4)
        (this->*tab[i])();
    else
        std::cout<<"\033[31m [ Probably complaining about insignificant problems ] \033[0m"<<std::endl;
}