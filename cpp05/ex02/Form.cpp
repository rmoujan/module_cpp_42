/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:57:05 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 15:33:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form :: Form():name("Form"),grade_signed(150),grade_executed(150)
{
		// std::cout << "\033[92mDefault Constructor of Bureaucrat has been invoked \033[0m"<<std::endl;

    std::cout <<"\033[92mDefault Constructor of Form has been invoked\033[0m" <<std::endl;
    this->status = 0;
	
}

Form  :: Form(std::string name_v, int g_s_v, int g_e_v):name(name_v),grade_signed(g_s_v), grade_executed(g_e_v){
    std::cout <<"\033[92mConstructor by parameter of Form has been invoked \033[0m" <<std::endl;
    this->status = 0;
}

Form :: Form(const Form &ref):name(ref.name),grade_signed(ref.grade_signed), grade_executed(ref.grade_executed)
{
	std::cout <<"\033[92mconstructor By Copy of Form has been invoked \033[0m"<<std::endl;
	this->status = ref.status;
}

Form & Form :: operator=(const Form & ref)
{
	std::cout << "\033[92mCopy  Assignement of Form has been invoked \033[0m"<<std::endl;
	this->status = ref.status;
	return (*this);
}

Form::~Form()
{
    std::cout <<"\033[92mDestructor of Form has been invoked \033[0m"<<std::endl;
}


const std::string Form :: getName()const{
    return (this->name);
}

const int Form :: getGradeSigned()const{
    return (this->grade_signed);
}

const int Form :: getGradeExecuted()const{
    return (this->grade_executed);
}

bool Form :: getStatus()const{
    return (this->status);
}

void Form :: beSigned(Bureaucrat &obj){

    try{
        if (obj.getGrade() <= this->getGradeSigned())
		{
            this->status = 1;
		}
        else
            throw Form :: GradeTooLowException();
    }
    catch(std::exception &e){
        std::cout <<e.what()<<std::endl;
    }
}


std::ostream & operator<<(std::ostream &out, const Form &obj)
{
	// return ("\033[1;31mgrade is too low\033[0m");
    out <<"\033[33mForm's Informations :    "<<std::endl;
	out <<"Form's Name is           "<<obj.getName()<<std::endl;
	out <<"Form's grade_signed is   "<<obj.getGradeSigned()<<std::endl;
	out <<"Form's grade_executed is "<<obj.getGradeExecuted()<<std::endl;
	out <<"Form's status is         "<<obj.getStatus()<<"\033[0m"<<std::endl;
    return (out);
}