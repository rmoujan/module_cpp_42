/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:10 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/25 01:58:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void get_integers(char *data, std::vector<long double> &vec, std::deque<long double> &li)
{
 	std::stringstream ss(data);  
    std::string word;
	long double value;

    while (ss >> word) 
	{
		std::stringstream object;
		object << word;
		object >> value;
		vec.push_back(value);
		li.push_back(value);
		if (value < 0 || value > 2147483647)
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE INTGER "<<std::endl;
			exit(0);
		}
    }
}

void check_error(std::string data)
{
	for (size_t i = 0; i < data.length(); i++)
	{
		if (!isdigit(data[i]) && data[i] != ' ' && data[i] != '.')
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
	}
	for (size_t i = 0; i < (data.length() - 1) ; i++)
	{
		if (data[i] == '.' && data[i + 1] == '.')
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
		if (data[i] == '.' && !isdigit(data[i + 1]) )
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}	
	}
	if (data[data.length() - 1] == '.')
	{
		std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
		exit(0);
	}
}
	
void global_check(char *argv[], int argc, 	std::vector<long double> &vec, std::deque<long double> &li)
{
	int j = 1;
	while (j < argc)
	{
		check_error(argv[j]);
		j++;
	}
	j = 1;
	while (j < argc)
	{
		get_integers(argv[j], vec, li);
		j++;
	}
}


void output_time(std::clock_t time_span1, std::clock_t time_span2,std::vector<long double> vec,std::deque<long double> li)
{
	double time_taken = double(time_span1) / CLOCKS_PER_SEC;
  	double time_taken_us = time_taken * 1000;

	double time_taken2 = double(time_span2) / CLOCKS_PER_SEC;
  	double time_taken_us2 = time_taken2 * 1000;

	std::cout <<"Time to process a range of "<<vec.size()<<" elements with std::vector : "<<time_taken_us<<" us"<<std::endl;
	std::cout <<"Time to process a range of "<<li.size()<<" elements with std::deque : "<<time_taken_us2<<" us"<<std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<long double> vec;
	std::deque<long double> li;
	std::deque<long double>::iterator it1;
	std::vector<long double>::iterator it; 
	std::clock_t time_span1;
	std::clock_t time_span2;

	if (argc >= 2)
	{
		global_check(argv, argc, vec, li);
		std::cout <<"Before : ";
		for (it1 = li.begin(); it1 != li.end(); ++it1)
        	std::cout << " " << *it1;
		sort(vec, li, time_span1, time_span2);

		std::cout <<"\nAFTER :  ";
		for (it1 = li.begin(); it1 != li.end(); ++it1)
        	std::cout << " " << *it1;
		std::cout <<std::endl<<std::endl;
		output_time(time_span1, time_span2, vec, li);
		return (0);
		
	}
	std::cout <<"Please Enter an argument "<<std::endl;
	return (0);
}