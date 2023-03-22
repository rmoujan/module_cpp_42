/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:38:36 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 14:19:02 by rmoujan          ###   ########.fr       */
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

void ft_errno()
{
    std::cout<<"ERROR : PLEASE ENTER A VALID DATA "<<std::endl;
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
	std::cout <<"a is "<<a <<" and b is "<<b<<std::endl;
	if (b == 0)
	{
		std::cout << "DIVISON BY ZERO"<<std::endl;
		exit(0);
	}
	else
	{
		int result=	get_result(c, b, a);
		mystack.push(result);
	}
		

}
void process(std::string data)
{
	std::istringstream integer_stream(data);
	std::istringstream char_stream(data);
	std::stack<int> mystack;
	char c;
	int n;
	// int i = 0;
    while (integer_stream || char_stream) {
		integer_stream >> n;
		char_stream >> c;
		if (integer_stream == 0 && char_stream == 0)
		{
			std::cout <<"BREAK"<<std::endl;
			break;
		}
		if (n != 0)
		{
			std::cout <<"*"<<n<<std::endl;
			mystack.push(n);
		}
		else if (c != 0)
		{
			// std::cout <<"!"<<c<<"!";
			if (mystack.size() >= 2)
			{
				std::cout <<"OK "<<std::endl;
				calcul(mystack, c);
			}
		}
		// std::cout <<i++<<std::endl;
    }
	std::cout <<"Result is "<<mystack.top()<<std::endl;
}

void check_error(std::string data)
{

    std::istringstream my_stream(data);
    std::string c;
    while (my_stream) {
        my_stream >> c;
		// std::cout <<c[0]<<" | "<<c[1]<<"|"<<std::endl;
        if (!valid_chars(c))
			ft_errno();
    }
}


void rpn(std:: string data)
{
    check_error(data);
	process(data);
    // for (size_t i = 0; i < data.length(); i++)
    // {
    //     // std::cout <<"|"<<data[i]<<"|"<<std::endl;
    // }
	
}