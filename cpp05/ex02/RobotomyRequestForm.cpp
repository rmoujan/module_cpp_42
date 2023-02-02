/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:50 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:38:26 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm :: RobotomyRequestForm()
{
	std::cout <<"Default constructor of RobotomyRequestForm has been invoked "<<std::endl;
}

RobotomyRequestForm :: RobotomyRequestForm(std::string value):Form("Robotomy", 72,45){
	std::cout <<"Constructor by Parameter of RobotomyRequestForm has been invoked "<<std::endl;
	this->target = value;
}

RobotomyRequestForm :: RobotomyRequestForm(const RobotomyRequestForm & obj)
{
	std::cout <<"Constructor by Copy of RobotomyRequestForm has been invoked "<<std::endl;
	*this = obj;
}

RobotomyRequestForm &  RobotomyRequestForm :: operator = (const RobotomyRequestForm & ref){
	std::cout <<"Copy Assignement of RobotomyRequestForm has been invoked "<<std::endl;
	this->target = ref.target;
	return *this;
}

RobotomyRequestForm ::~RobotomyRequestForm()
{
	std::cout <<"Destructor of RobotomyRequestForm has been invoked "<<std::endl;
}

std::string RobotomyRequestForm :: getTarget()const{
	return (target);
}

void  RobotomyRequestForm :: some_noise(void)const
{
	std::cout << "Some Drilling Noises "<<std::endl;
	if (time(nullptr) % 2)
	{
		std::cout <<this->getTarget()<<" has been robotomized successfully 50% of the time "<<std::endl;
	}
	else
		std::cout <<" Robotmy failed "<<std::endl;
}


//define new behaviour of the ovveride fct :
void RobotomyRequestForm :: execute(Bureaucrat const & executor) const {
	
	try{
		if (this->getStatus() && executor.getGrade() <= this->getGradeExecuted())
		{
			this->some_noise();
		}
		else
            throw Form :: GradeTooLowException();
		
	}
	catch(std::exception &e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void RobotomyRequestForm :: output()const
{
	std::cout <<"\033[33mShrubbery's Informations :    "<<std::endl;
	std::cout <<"Shrubbery's Name is           "<<getName()<<std::endl;
	std::cout <<"Shrubbery's Target is           "<<getTarget()<<std::endl;
	std::cout <<"Shrubbery's grade_signed is   "<<getGradeSigned()<<std::endl;
	std::cout <<"Shrubbery's grade_executed is "<<getGradeExecuted()<<std::endl;
	std::cout <<"Shrubbery's status is         "<<getStatus()<<"\033[0m"<<std::endl;
}