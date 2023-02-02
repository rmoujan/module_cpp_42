/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:45 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:19:17 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm :: PresidentialPardonForm()
{
	std::cout <<"Default constructor of PresidentialPardonForm has been invoked "<<std::endl;
}

PresidentialPardonForm :: PresidentialPardonForm(std::string value):Form("PresidentialPardon", 72,45){
	std::cout <<"Constructor by Parameter of PresidentialPardonForm has been invoked "<<std::endl;
	this->target = value;
}

PresidentialPardonForm :: PresidentialPardonForm(const PresidentialPardonForm & obj)
{
	std::cout <<"Constructor by Copy of PresidentialPardonForm has been invoked "<<std::endl;
	*this = obj;
}

PresidentialPardonForm &  PresidentialPardonForm :: operator = (const PresidentialPardonForm & ref){
	std::cout <<"Copy Assignement of PresidentialPardonForm has been invoked "<<std::endl;
	this->target = ref.target;
	return *this;
}

PresidentialPardonForm ::~PresidentialPardonForm()
{
	std::cout <<"Destructor of PresidentialPardonForm has been invoked "<<std::endl;
}

std::string PresidentialPardonForm :: getTarget()const{
	return (target);
}

void  PresidentialPardonForm :: inform(void)const
{
	std::cout <<this->getTarget()<<" has been pardoned by Zaphod Beeblebrox "<<std::endl;
}


//define new behaviour of the ovveride fct :
void PresidentialPardonForm :: execute(Bureaucrat const & executor) const {
	
	try{
		if (this->getStatus() && executor.getGrade() <= this->getGradeExecuted())
		{
			this->inform();
		}
		else
            throw Form :: GradeTooLowException();
		
	}
	catch(std::exception &e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void PresidentialPardonForm :: output()const
{
	std::cout <<"\033[33mShrubbery's Informations :    "<<std::endl;
	std::cout <<"Shrubbery's Name is           "<<getName()<<std::endl;
	std::cout <<"Shrubbery's Target is           "<<getTarget()<<std::endl;
	std::cout <<"Shrubbery's grade_signed is   "<<getGradeSigned()<<std::endl;
	std::cout <<"Shrubbery's grade_executed is "<<getGradeExecuted()<<std::endl;
	std::cout <<"Shrubbery's status is         "<<getStatus()<<"\033[0m"<<std::endl;
}