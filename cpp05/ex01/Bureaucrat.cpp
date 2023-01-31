/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:23 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 18:50:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():name("Bureaucrat")
{
	std::cout << "\033[92mDefault Constructor of Bureaucrat has been invoked \033[0m"<<std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name_v, int value):name(name_v)
{
    std::cout <<"\033[92mconstructor By Parameter of Bureaucrat has been invoked \033[0m"<<std::endl;
    this->grade = value;
}
Bureaucrat::Bureaucrat(const Bureaucrat & ref )
{
    std::cout <<"\033[92mconstructor By Copy of Bureaucrat has been invoked \033[0m"<<std::endl;
    *this = ref;
}
Bureaucrat & Bureaucrat ::  operator=(const Bureaucrat& ref){
	std::cout << "\033[Copy  Assignement of Bureaucrat has been invoked \033[0m"<<std::endl;
	this->grade = ref.grade;
	return (*this);
}

std::string Bureaucrat :: getName()const{
    return (this->name);
}

int Bureaucrat :: getGrade()const{
    return (this->grade);
}

void Bureaucrat ::decrease_grade()
{
    int result;
    result = this->grade - 1;

    try{
		if (result < 1 )
			throw Bureaucrat :: GradeTooHighException();
		else if (result > 150)
			throw Bureaucrat :: GradeTooLowException();
		this->grade = result;
		std::cout <<"\033[34mthe Grade is incremented successfully\033[0m"<<std::endl;
    }
    catch(std::exception &e){
        std::cout <<"\033[1;31mU cannot incremented the grade cuz \033[0m"<< e.what()<<std::endl;
    }
}

void Bureaucrat ::increase_grade()
{
    int result;
    result = this->grade + 1;

    try{
		if (result < 1 )
			throw Bureaucrat :: GradeTooHighException();
		else if (result > 150)
			throw Bureaucrat :: GradeTooLowException();
		this->grade = result;
		std::cout <<"\033[34mthe Grade is decremented successfully\033[0m"<<std::endl;
    }
    catch(std::exception &e){
        std::cout <<"\033[1;31mU cannot decremented the grade cuz \033[0m"<<e.what()<<std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"\033[92mDestructor of Bureaucrat has been invoked \033[0m"<<std::endl;
}


std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out <<"\033[95m"<<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<"\033[0m"<<std::endl;
    return (out);
}

void Bureaucrat  :: signForm(Form & obj){

    if (obj.getStatus())
    {
        std::cout <<"\033[95m"<<this->getName()<<" signed "<<obj.getName()<<"\033[0m"<<std::endl;  
    }
    else{
        std::cout <<"\033[95m"<<this->getName()<<" couldn't sign "<<obj.getName()<<" because its form was not signed \033[0m"<<std::endl;
    }
}