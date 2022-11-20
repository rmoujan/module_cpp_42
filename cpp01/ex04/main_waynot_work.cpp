/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_waynot_work.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:23:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 11:38:45 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

// void process(std::string line, std::ofstream new_file)
// {
//     std::cout <<line << std:: endl;
//     //process of replacing str1 by str2
//     new_file << line << std::endl;  
// }

int main(int argc, char *argv[]) {

    std::ifstream read_file;
    std::ofstream new_file; 
    std::string line;
    size_t found ;
    size_t len;
    int i = 0;
    int pos = 0;
    len = strlen(argv[2]);
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
                // std::cout <<line << std:: endl;
                //process of replacing str1 by str2
                // std::cout<<pos<<std::endl;
                // while (line[i])
                // {
                    // std::cout<<"unside while"<<pos<<std::endl;
                    if(line[i] == argv[2][0])
                    {
                        bool found = line.find(argv[2], pos + len) != std::string::npos;
                        pos = line.find(argv[2]);
                        if (found)
                            new_file<<argv[2];
                        i = pos + strlen(argv[2]) - 1;
                    }
                    else
                    {
                        new_file<<line[i];
                    }
                    std::cout <<i<<" and pos is " <<pos<<std::endl;
                    i++;
                //    std:: cout<<'|'<<line[i]<<'|'<<std::endl;
                // }
                // exit(0);
                // new_file << line << std::endl;
                // exit (0);      
            }   
        }
        return (0);
    }
    // std::cout << "\033[31m UR ENTERED MORE/LESS PARAMETERS EXPECTED \033[0m"<<std::endl;
    return (0);
}
