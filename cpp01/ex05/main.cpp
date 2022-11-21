/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:07 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 11:35:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl h;
    std::string level;

    std::cout<< "\033[31m If u Wanna More Informations About Each Choice ,Please Select One of the Numbers Below :"<<std::endl;
    std::cout <<" DEBUG   ==>    1 "<<std::endl;
    std::cout <<" INFO    ==>    2 "<<std::endl;
    std::cout <<" WARNING ==>    3 "<<std::endl;
    std::cout <<" ERROR   ==>    4 \033[0m"<<std::endl;

    std::cout<<std::endl<<"\033[92m Ur Number is ::  \033[0m";
    std::getline(std::cin, level);
    h.complain(level);
    return (0);    
}