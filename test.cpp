/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:16:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/11 18:50:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

using namespace std;

// class Test{
//   public:
//   int height;
//   int width;
//     public:
//     Test()
//     {
//         std::cout<<"const by default";
//     }
//     Test(int h, int w)
//     {
//         height = h;
//         width = w;
//     }
//     void init(int h, int w)
//     {
//         height = h;
//         width = w;
//     }
//     void print()
//     {
//         std::cout<<"height is "<<height<<std::endl;
//         std::cout<<"width is "<<width<<std::endl;
//     }
//     // void ft_double()
//     // {
//     //     height =height *2;
//     //     width = width*2;
//     // }
//     ~Test()
//     {
//      std::cout<<"dec by default";   
//     }
// };


int main()
{
    // Test *t = new Test();    //not Object 
    
    // t->height = 10;
    // t->width = 10;
    
    // delete t;
	std::string searched;
    int nbr;
    int i = 0;

    do{
        std::cout << "Enter a the index of the user that u looking for :\n";
        getline(std::cin, searched);
        if(std::cin.eof())
            exit(1);
    }while(searched.empty());
    while (i < searched.length())
    {
        if (!isdigit(searched[i]))
            exit(0);
        i++;
    }
    nbr = std :: atoi(searched.c_str());
    std::cout<<"before :: nbr is "<<searched<<std::endl;
    std::cout<<"after  :: nbr is "<<nbr<<std::endl;
    
    // Test *first = new Test(30,40);
    // string str, ptr;
    // while (1)
    // {
        
    //     cout <<"enter your name"<<endl;
    //     cin>>str;
    //     cout <<"enter your last"<<endl;
    //     cin>>ptr;
    //     // cin>>ptr;
    //     cout <<"/ :str"<<str<<endl;
    //     cout <<"* : ptr"<<ptr<<endl;
    //     if (str[0] == '\0')
    //         cout <<"STR IS NULL" <<endl;
    //     else
    //         cout <<"STR IS FULL"<<endl;
    // }
    // first->init(10,20);
    // first->print();
    // // std::cout << "koko" << std::endl;
    // first.height = 10;
    // first.width = 20;
    // first.print();
    // first.ft_double();
    // first.print();
    // char str[4] = "C++";
    // first = new Test(60,80);
    // first->print();
    // string str;
    
    //  system("leaks a.out");
// char str[] = {'C','+','+','\0'};

// char str[4] = {'C','+','+','\0'};
// cout<<str;
    // char str[100];
    // cout <<"enter ur str"<<endl;
    // cin >>str;
    // cout<<"\n the str is "<<str<<endl;
    return (1);
}