/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:10 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 11:29:25 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl  :: debug(void)
{
    std::cout <<"\033[34m[DEBUG] \033[0m"<<std::endl;
    std::cout <<" I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"<<std::endl;
}

void Harl :: info(void)
{
    std::cout <<"\033[34m[INFO] \033[0m"<<std::endl;
    std::cout <<" I cannot believe adding extra bacon costs more money"<<std::endl;
    std::cout <<" You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !"<<std::endl;
 
}

void Harl :: warning(void)
{
    std::cout <<"\033[34m[WARNING] \033[0m"<<std::endl;
    std::cout <<" I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout <<" I've been coming for years whereas you started working here since last month"<<std::endl;
}

void Harl :: error(void)
{
    std::cout<<"\033[34m[ERROR] \033[0m"<<std::endl;
    std::cout<<" This is unacceptable ! I want to speak to the manager now."<<std::endl;
}

//still need understand pointers to member of functions !!!
//does not work
void Harl :: complain(std::string level)
{
    typedef void (Harl :: *ptr)(void);
    ptr tab[5];
    int number;

    tab[1]=&Harl::debug;
    tab[2]=&Harl::info;
    tab[3]=&Harl::warning;
    tab[4]=&Harl::error;

    number = atoi(level.c_str());
    std::cout<<std::endl;
    if (number >= 1 && number <= 4)
        (this->*tab[number])();
    else
        std::cout<<"\033[31mThe NUmber That u Entered is Out of the rang\033[0m"<<std::endl;
}







// void Harl :: complain(std::string level)
// {
//     // void (Harl :: *pf)(void);
//     typedef void (Harl :: *fptr)(void);
//     fptr ftab[4];
//     // void (*pf)(void);
//     // debug();
//     // pf = &Harl :: debug;
//     ftab[0]=&Harl :: debug;
//     ftab[1]=&Harl :: info;
//     ftab[2]=&Harl :: warning;
//     ftab[3]=&Harl :: error;
//     int nm;
//     nm = atoi(level.c_str());
//     printf("%d\n", nm);
//     // nm = atoi(level);
//     if (nm >=0 && nm <= 3)
//     {
//         std::cout<<"inside if"<<std::endl;
//         std::cout<<((ftab[nm]));
        
//     }
//     else
//         std::cout<<" THE Number that u are looking for is out of range"<<std::endl;
        
//     // typedef int (*fptr)(int, int);
//     // fptr ftab[4];
//     //pf =&level;
//     //pf =&level;
// }

// //read this articles mzn:
// http://websites.umich.edu/~eecs381/handouts/Pointers_to_memberfuncs.pdf
// https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions#:~:text=Un%20pointeur%20de%20fonction%20contient,les%20fonctions%20comme%20des%20variables.
