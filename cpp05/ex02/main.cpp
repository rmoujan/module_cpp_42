/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 18:52:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    int grade;
	int grade_signed;
	int grade_required;
// \033[95m
	// std::cout <<"\033[95mDAS BEGIN\033[0m"<<std::endl;
	// std::cout <<"\033[95m-----------------------------------\033[0m"<<std::endl;
    try{

		std::cout <<" --- BUREAUCRAT DATA : "<<std::endl;
        std::cout << " --- Enter the Grade of Bureaucrat ";
        std::cin  >> grade;

        if (grade < 1 )
            throw Bureaucrat :: GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat :: GradeTooLowException();
		
        Bureaucrat obj("Reshe", grade);
		std::cout <<"-----------------------------------"<<std::endl;
		obj.decrease_grade();
		obj.increase_grade();
		std::cout<<obj<<std::endl<<std::endl;
		
		std::cout <<"-----------------------------------"<<std::endl;
		std::cout <<" --- FORM DATA : \033[0m"<<std::endl;
		std::cout << " --- Enter the grade_signed of Form ";
        std::cin  >> grade_signed;
		std::cout << " --- Enter the grade_required of Form ";
        std::cin  >> grade_required;
		std::cout<<std::endl;
        if (grade_signed < 1 || grade_required < 1)
		{
            throw Form :: GradeTooHighException();
		}
        else if (grade_signed > 150 || grade_required > 150)
		{
            throw Form :: GradeTooLowException();
		}
		
		Form f("Rima", grade_signed, grade_required);
		f.beSigned(obj);
		obj.signForm(f);
		std::cout<<std::endl;
		std::cout <<f<<std::endl;
    }
    catch(std::exception &e){
        std::cout <<e.what()<<std::endl;
    }
	// std::cout <<"-----------------------------------\033[0m"<<std::endl;
    // std::cout <<"\033[95mDAS ENDE \033[0m"<<std::endl;
    return (0);
}