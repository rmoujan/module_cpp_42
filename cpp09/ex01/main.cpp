/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:38:15 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 11:28:56 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        if (argc > 2)
        {
            std::cout<<"ERROR : PLEASE ENTER A CORRECT DATA "<<std::endl;
            return (0);
        }
        rpn(argv[1]);
        return (0);
    }
    std::cout <<" PLEASE ENTER AN INPUT "<<std::endl;
    return (0);
}
