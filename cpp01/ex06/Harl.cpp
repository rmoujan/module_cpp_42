/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 15:56:30 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl  :: debug(void)
{
    std::cout <<" [DEBUG] "<<std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"<<std::endl;
}

void Harl :: info(void)
{
    std::cout << " [INFO] "<<std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money"<<std::endl;
    std::cout <<" You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"<<std::endl;
 
}

void Harl :: warning(void)
{
    std::cout << " [WARNING] "<<std::endl;
    std::cout << " I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout <<" I've been coming for years whereas you started working here since last month"<<std::endl;
}

void Harl :: error(void)
{
    std::cout << " [ERROR] "<<std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now."<<std::endl;

}

void Harl :: complain(std::string level)
{
    
}