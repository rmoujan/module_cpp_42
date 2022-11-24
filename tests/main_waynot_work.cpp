/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_waynot_work.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:23:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 14:50:48 by rmoujan          ###   ########.fr       */
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


// 72 62 54 13 9 
// 67 33 99 40 81 
// 97 1 41 22 2 50 
// 31 74 79 36 93 23 
// 10 26 57 8 56 95 
// 87 49 35 38 48 28 
// 83 59 37 52 30 16 
// 3 43 32 85 68 88 42 
// 44 20 21 96 66 17 39 
// 46 25 53 55 12 5 100 86 
// 11 61 6 4 45 80 91 15 24 
//  64 75 89 14 7 63 71 76 78
// 77 92 73 98 69 82 90 60 47 27
//  18 70 65 58 34 51 19 29 94 84 