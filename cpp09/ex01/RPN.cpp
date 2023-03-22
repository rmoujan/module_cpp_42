/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:38:36 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 15:09:59 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int valid_chars(std::string c)
{
    if (c == "+" || c == "*" || c == "/" || c == "-" || 
		(isdigit(c[0]) && c[1] =='\0'))
	{
        return (1);
	}
    return (0);
}

void ft_errno(int code)
{
	if (code == 1)
    	std::cout<<"ERROR : PLEASE ENTER A VALID DATA "<<std::endl;
	else if (code == 2)
    	std::cout<<"ERROR : INVALID EXPRESSION"<<std::endl;
	else if (code == 3)
    	std::cout<<"ERROR : INVALID EXPRESSION"<<std::endl;
	else if (code == 4)
    	std::cout<<"ERROR : DIVISION BY ZERO"<<std::endl;
    exit(0);
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

void calcul(std::stack<int> &mystack, char c)
{
	int a, b;
	a = mystack.top();
	mystack.pop();
	b = mystack.top();
	mystack.pop();

	if (a == 0)
		ft_errno(4);
	else
	{
		int result=	get_result(c, b, a);
		mystack.push(result);
	}
}

void process(std::string data)
{
	std::stack<int> mystack;
	int n;
	for (size_t i = 0; i < data.length(); i++)
	{
		if (data[i] == ' ')
			continue;
		else if (isdigit(data[i]))
		{
			std::stringstream ss;
            ss << data[i];  
            ss >> n;
            mystack.push(n);
		}
		else
		{
			if (mystack.size() >= 2)
			{
				calcul(mystack, data[i]);
			}
			else if (mystack.size() < 2)
				ft_errno(3);
		}
	}
	if (mystack.size() != 1)
		ft_errno(2);
	std::cout <<mystack.top()<<std::endl;
}

//check if only valid chars exist !!!
void check_error(std::string data)
{

    std::istringstream my_stream(data);
    std::string c;
    while (my_stream) {
        my_stream >> c;
        if (!valid_chars(c))
			ft_errno(1);
    }
}

void check_syntaxe_rpn(std::string data)
{
	for (size_t i = (data.length() - 1); i >= 0; i--)
	{
		if (data[i] == ' ')
			continue;
		else if (isdigit(data[i]))
		{
			std::cout <<"RPN "<<data[i]<<std::endl;
			ft_errno(1);
		}
		else
			break;
	}
}

void rpn(std:: string data)
{
    check_error(data);
	check_syntaxe_rpn(data);
	process(data);
}