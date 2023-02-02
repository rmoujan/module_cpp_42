/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:45:17 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
int main()
{
	int grade;
	int grade_signed;
	int grade_executed;
	
	try{
		std::cout <<"enter the grade of Bureaucrat :";
		std::cin >>grade;
		std::cout <<std::endl;
		if (grade < 1)
			throw Bureaucrat :: GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat :: GradeTooLowException();

		Bureaucrat b("Reshe", grade);
		std::cout <<b;
		std::cout <<"enter the grade signed of Form :";
		std::cin >>grade_signed;
		std::cout <<"enter the grade executed of Form :";
		std::cin >>grade_executed;
		if (grade_signed < 1 || grade_executed < 1)
			throw Form :: GradeTooHighException();
		else if (grade_signed > 150 || grade_executed > 150)
			throw Form :: GradeTooLowException();
		Form *f = new PresidentialPardonForm("Reshe");
		f->output();
		f->beSigned(b);
		b.signForm(*f);
		b.executeForm(*f);
		f->execute(b);
	}
	catch(std::exception & e)
	{
		// delete f;
		std::cout <<e.what()<<std::endl;
	}
	return (0);
}