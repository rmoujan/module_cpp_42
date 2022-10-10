/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:16:13 by rmoujan           #+#    #+#             */
/*   Updated: 2022/09/30 16:07:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
using namespace std;
class Test{
  public:
  int height;
  int width;
    
    Test(int h, int w)
    {
        height = h;
        width = w;
    }
    void init(int h, int w)
    {
        height = h;
        width = w;
    }
    void print()
    {
        std::cout<<"height is "<<height<<std::endl;
        std::cout<<"width is "<<width<<std::endl;
    }
    // void ft_double()
    // {
    //     height =height *2;
    //     width = width*2;
    // }
};
int main()
{
    // Test *first = new Test(30,40);
    string str, ptr;
    while (1)
    {
        
        cout <<"enter your name"<<endl;
        cin>>str;
        cout <<"enter your last"<<endl;
        cin>>ptr;
        // cin>>ptr;
        cout <<"/ :str"<<str<<endl;
        cout <<"* : ptr"<<ptr<<endl;
        if (str[0] == '\0')
            cout <<"STR IS NULL" <<endl;
        else
            cout <<"STR IS FULL"<<endl;
    }
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