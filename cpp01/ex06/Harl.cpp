/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 14:08:05 by rmoujan          ###   ########.fr       */
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
    levels l;

    l = level;
    switch(l){
    case 1:
        this.debug();
        thisinfo();
        this.warning();
        this.error();
        break;
    case 2:
        this.info();
        this.warning();
        this.error();
        break;
    case 3:
        this.warning();
        this.error();
        break;
    case 4:
        this.error();
        break;
    
        
}