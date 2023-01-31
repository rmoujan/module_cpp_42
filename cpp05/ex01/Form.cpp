/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:57:05 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 10:19:07 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form :: Form()
{
    std::cout <<"Default Constructor of Form has been invoked" <<std::endl;
    this->status = 0;
}

Form  :: Form(std::string name_v, int g_s_v, int g_e_v):name(name_v),grade_signed(g_s_v), grade_executed(g_e_v){
    std::cout <<"Constructor by parameter of Form has been invoked" <<std::endl;
    this->status = 0;
    try{
        throw_exception(value);
        this->grade = value;
    } 
    catch(int x){
        handle_exception(x);
    }
}








void Form :: throw_exception(int x)
{
    if (x < 1 || x > 15)
        throw x;
}

void Form :: handle_exception(int x)
{
    if (x < 1)
        GradeTooHighException();
    else if (x > 150)
        GradeTooLowException();
}

Form::~Form()
{
    std::cout <<"Destructor of Form has been invoked "<<std::endl;
}

void Form :: GradeTooHighException()
{
    std::cout<<"the grade is high "<<std::endl;
}

void Form :: GradeTooLowException()
{
    std::cout<<"the grade is low "<<std::endl;
}

const std::string Form :: getName()const{
    return (this->name);
}

const int Form :: getSigned_var()const{
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
            this->status = 1;
        else
            throw 0;
    }
    catch(int x)
    {
        GradeTooLowException();
    }
}


std::ostream & operator<<(std::ostream &out, const Form &obj)
{
    out <<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<std::endl;
    return (out);
}