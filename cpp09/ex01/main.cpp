/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:38:15 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/20 20:53:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{

    if (argc > 1)
    {
        // if (argv[1][0] != '"')
        // {
        //     std::cout<<"ERROR : put your input inside double quotes "<<std::endl;
        //     exit(0);
        // }
        RPN obj;
        obj.calcul(argv[1]);
        return (0);
    }
    std::cout <<" PLEASE ENTER AN INPUT "<<std::endl;
    return (0);
}