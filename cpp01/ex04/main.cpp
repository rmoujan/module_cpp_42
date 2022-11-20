/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:23:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 12:51:24 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::ifstream read_file;
    std::ofstream new_file; 
    
    std::string line;
    std::string new_str;
    
    size_t found ;
    size_t len;
    
    int i = 0;
    int pos = 0;

    len = strlen(argv[2]);
    new_file.open("new_file");

    if (argc == 4)
    {
        read_file.open(argv[1]);
        if (read_file)
        {
            while (getline(read_file, line))
            {
                i = 0;
                while (line[i])
                {
                    new_str = line.substr(i, strlen(argv[2]));
                    std::cout<<" new str is |"<<new_str<<"| len is "<< strlen(argv[2])<<std::endl;
                    std::cout<<new_str<<std::endl;
                    if (new_str.compare(argv[2]) == 0)
                    {
                        new_file<<argv[3];
                        i += strlen(argv[2]);
                    }
                    else
                    {
                        new_file<<line[i];
                        i ++;
                    }
                    if (i > line.length())
                        break;
                }
                printf("*******\n");
                new_file<<std::endl;
            }   
        }
        return (0);
    }
    // std::cout << "\033[31m UR ENTERED MORE/LESS PARAMETERS EXPECTED \033[0m"<<std::endl;
    return (0);
}
