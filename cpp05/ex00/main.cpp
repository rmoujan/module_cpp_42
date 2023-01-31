/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 15:37:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    int grade;

	std::cout <<"DAS BEGIN"<<std::endl;
    try{

        std::cout << "Enter your Grade ";
        std::cin  >> grade;

        if (grade < 1 )
            throw Bureaucrat :: GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat :: GradeTooLowException();
		
        Bureaucrat obj("Reshe", grade);
		std::cout <<"-----------------------------------"<<std::endl;
		obj.decrease_grade();
		obj.increase_grade();
		std::cout <<"-----------------------------------"<<std::endl;
		std::cout << "grade is "<<obj.getGrade()<<std::endl;
		
    }
    catch(std::exception &e){
        std::cout <<e.what()<<std::endl;
    }
	std::cout <<"-----------------------------------"<<std::endl;
    std::cout <<"DAS ENDE "<<std::endl;
    return (0);
}