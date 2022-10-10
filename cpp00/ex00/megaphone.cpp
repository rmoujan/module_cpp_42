/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:32:38 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/10 14:34:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
    int i;
    int j;
    
    i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            while (argv[i])
            {
                j = 0;
                while (argv[i][j])
                {
                    if (isalpha(argv[i][j]))
                        std::cout<<(char)toupper(argv[i][j]);
                    else
                        std::cout<<(argv[i][j]); 
                    j++;
                }
            i++;  
            }
        }
    }
    else
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return (0);
    }
    std::cout<<std::endl;
    return (0);
}