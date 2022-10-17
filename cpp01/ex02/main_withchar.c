/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_withchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:12:53 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/17 14:13:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    char *str = "HI THIS IS BRAIN";
    char *stringPTR = str;
    char*& stringREF = str;

    // std:: string str = "HI THIS IS BRAIN";
    // std:: string stringPTR = str;
    // char*& stringREF = str;
 std::cout<< "\033[34m The memory address of the string variable ::: \033[0m"<<sizeof(char)<<std::endl;
 return(0);
    std::cout <<"\033[31m|| OUTPUTING THE MEMORY ADDRESS ||\033[0m"<<std::endl;
    // std::cout <<"\033[92m***********************************\033[0m"<<std::endl<<std::endl;
    std::cout<< "\033[34m The memory address of the string variable ::: \033[0m"<<&str<<std::endl;
    std::cout<< "\033[34m The memory address held by stringPTR      ::: \033[0m"<<static_cast<void*>(stringPTR)<<std::endl;
    std::cout<< "\033[34m The memory address held by stringREF      ::: \033[0m"<<static_cast<void*>(stringREF)<<std::endl<<std::endl;

    std::cout <<"\033[31m|| OUTPUTING THE VALUES ||\033[0m"<<std::endl;
    // std::cout <<"\033[92m***********************************\033[0m"<<std::endl<<std::endl;
    std::cout<< "\033[34m The value of the string variable       ::: \033[0m"<<str<<std::endl;
    std::cout<< "\033[34m The value pointed to by stringPTR      ::: \033[0m"<<stringPTR<<std::endl;
    std::cout<< "\033[34m The value pointed to by stringREF      ::: \033[0m"<<stringREF<<std::endl;
    
    return 0;
}