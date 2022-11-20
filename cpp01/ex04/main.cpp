/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:23:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 10:50:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::ifstream read_file;
    std::ofstream new_file; 
    std::string line;
    size_t found ;
    size_t len;
    size_t i = 0;
    
    new_file.open("new_file");
    if (argc == 4)
    {
        //do the work 
        read_file.open(argv[1]);
        if (read_file)
        {
            //if file exists :
            while (getline(read_file, line))
            {
                // i     = strlen(argv[2]);
                // found = line.find(argv[2], 0, len);
                std::cout <<line << std:: endl;
               //process of replacing str1 by str2
               new_file << line << std::endl;
                // exit (0);               
            }   
        }
        return (0);
    }
    // std::cout << "\033[31m UR ENTERED MORE/LESS PARAMETERS EXPECTED \033[0m"<<std::endl;
    return (0);
}
