/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:10 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/24 03:37:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void get_integers(char *data, std::vector<int> &vec, std::deque<int> &li)
{
 	std::stringstream ss(data);  
    std::string word;
	float value;

    while (ss >> word) 
	{
		std::stringstream object;
		object << word;
		object >> value;
		vec.push_back(value);
		li.push_back(value);
		if (value < 0)
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
    }
}

void check_error(std::string data)
{
	for (size_t i = 0; i < data.length(); i++)
	{
		if (!isdigit(data[i]) && data[i] != ' ')
		{
			std::cout <<"PLEASE ENTER ONLY POSITIVE VALUE "<<std::endl;
			exit(0);
		}
	}
	
}
void output_time(std::chrono:: duration<double> time_span1, std::chrono:: duration<double> time_span2,std::vector<int> vec,std::deque<int> li)
{
	std::cout <<"Time to process a range of "<<vec.size()<<" elements with std::vector : "<<time_span1.count()<<" us"<<std::endl;
	std::cout <<"Time to process a range of "<<li.size()<<" elements with std::deque : "<<time_span2.count()<<" us"<<std::endl;
}

int main(int argc, char *argv[])
{
	std::vector<int> vec;
	std::deque<int> li;
	std::deque<int>::iterator it1;
	std::vector<int>::iterator it; 
	std::chrono:: duration<double> time_span1;
	std::chrono:: duration<double> time_span2;
	if (argc == 2)
	{
		check_error(argv[1]);
		get_integers(argv[1], vec, li);

		std::cout <<"Before: ";
		for (it1 = li.begin(); it1 != li.end(); ++it1)
        	std::cout << " " << *it1;

		sort(vec, li, time_span1, time_span2);
		std::cout <<"\nAFTER:  ";

		for (it1 = li.begin(); it1 != li.end(); ++it1)
        	std::cout << " " << *it1;

		std::cout <<std::endl;
		output_time(time_span1, time_span2, vec, li);
		return (0);
	}
	std::cout <<"Please Enter an argument "<<std::endl;
	return (0);
}