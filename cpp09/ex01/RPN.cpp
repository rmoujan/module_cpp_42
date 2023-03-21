/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:38:36 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/21 04:15:04 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int valid_chars(char c)
{
    if (c == ' ')
        return (1); 
    if (c == '+' || c == '*' || c == '/' || c == '-'  || isdigit(c))
        return (2);
    return (0);
}

void ft_errno()
{
    std::cout<<"ERROR : PLEASE ENTER VALID DATA "<<std::endl;
    exit(0);
}

int parse_data(std::string data)
{
    if (data.length() < 3)
        ft_errno();
    if (data[0] == ' ')
    {
        std::cout <<"1"<<std::endl;
        ft_errno();//de preference throw an exception !!!!
    }
    if (data[data.length() - 1] == ' ' || isdigit(data[data.length() - 1]))
    {
        std::cout <<"2"<<std::endl;
        ft_errno();
    }
    if (data.length() >= 2)
    {
        if ( !isdigit(data[0]) && ( !isdigit(data[1]) || data[1] != ' ') )
            ft_errno();
    }
    for(int i = 0; i < (data.length() - 1); i++)
    {
        std::cout <<"3"<<std::endl;
        if (!valid_chars(data[i]))
        {
            std::cout <<"3-1"<<std::endl;
            ft_errno();
        }
        if (valid_chars(data[i]) == 1)
        {

            if ( valid_chars(data[i + 1]) != 2)
            {
                std::cout <<"3-2"<<std::endl;
                ft_errno();
            }
        }
        if (valid_chars(data[i]) == 2)
        {
            if ( valid_chars(data[i + 1]) != 1)
            {
                std::cout <<"3-3 "<<data[i]<<std::endl;
                ft_errno();
            }
        }
    }
    return (1);
}

int get_result(char c, int a, int b)
{
    if (c == '+')
        return (a + b);
    else if (c == '-')
        return (a - b);
    else if (c == '*')
        return (a * b);
    else if (c == '/')
        return (a / b);
    return 0;
}

int valid_syntaxe(std:: string data)
{

    return (1);
}

void calcul(std:: string data)
{
    std::stack<int> numbers;
    int n;
    int i = 0, j = 0;
    int tab[2];
    int result = 0;
    parse_data(data);
    // valid_syntaxe(data);
    std::cout <<"OK"<<std::endl;
    for(int i = 0; i < data.length(); i++)
    {
        if (data[i] == ' ')
            continue;
        else if (isdigit(data[i]))
        {
            std::stringstream ss;
            ss << data[i];  
            ss >> n;
            numbers.push(n);
        }
        else if (data[i] == '+' || data[i] == '/' 
        || data[i] == '*' ||  data[i] == '-')
        {
            j = 0;
            while(!numbers.empty())
            {
                if (j ==  2)
                   break;
                tab[j++] = numbers.top();
                numbers.pop();
            }
            if (j == 2)
            {
                //do work :
                result = get_result(data[i], tab[1], tab[0]);
                numbers.push(result);
            }
        }   
    }
    while (!numbers.empty()) {
        // std::cout << numbers.top() <<" ";
    std::cout <<"Result is "<<numbers.top()<<std::endl;
        numbers.pop();
    }
}