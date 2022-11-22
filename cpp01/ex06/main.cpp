/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:07 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 12:32:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl h;
    if (argc >= 2)
    {
        h.complain(argv[1]);
        return (0);   
    }
    std::cout<<"\033[31m Please Enter just a Level \033[0m"<<std::endl;
    return (0);
}