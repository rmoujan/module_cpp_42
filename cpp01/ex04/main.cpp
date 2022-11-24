/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:23:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/23 17:06:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    std::ifstream read_file;
    std::ofstream new_file; 
    
    std::string line;
    std::string new_str;
    std::string name;
    std::string s = ".replace";
    size_t i = 0;

    if (argc == 4)
    {
        read_file.open(argv[1]);
        if (read_file)
        {
            name = argv[1] + s;
            new_file.open(name);
            while (getline(read_file, line))
            {
                i = 0;
                while (line[i])
                {
                    new_str = line.substr(i, strlen(argv[2]));
                    if (new_str.compare(argv[2]) == 0)
                    {
                        new_file<<argv[3];
                        i += strlen(argv[2]);
                    }
                    else
                    {
                        new_file<<line[i];
                        i++;
                    }
                    if (i > line.length())
                        break;
                }
                new_file<<std::endl;
            }   
        }
        else
        {
            std::cout<< "\033[31m ERROR OCCURS WHEN OEPNING THE FILE\033[0m"<<std::endl;
        }
        return (0);
    }
    std::cout << "\033[31m UR ENTERED MORE/LESS PARAMETERS EXPECTED \033[0m"<<std::endl;
    return (0);
}
