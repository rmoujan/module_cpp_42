/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:23 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/29 16:36:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


void Bureaucrat :: throw_exception(int x)
{
    if (x < 1 || x > 15)
        throw x;
}

void Bureaucrat :: handle_exception(int x)
{
    if (x < 1)
        GradeTooHighException();
    else if (x > 150)
        GradeTooLowException();
}

Bureaucrat::Bureaucrat():name("Bureaucrat")
{
    std::cout <<"Default constructor of Bureaucrat has been invoked "<<std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name_v, int value):name(name_v)
{
    std::cout <<"constructor By Parameter of Bureaucrat has been invoked "<<std::endl;
    try{
        throw_exception(value);
        this->grade = value;
    } 
    catch(int x){
        handle_exception(x);
    }
}

std::string Bureaucrat :: getName()const{
    return (this->name);
}

int Bureaucrat :: getGrade()const{
    return (this->grade);
}

void Bureaucrat ::increment_grade()
{
    int result;
    result = this->grade - 1;
    try{
        throw_exception(result);
        this->grade = result;
    } 
    catch(int x){
        handle_exception(x);
    } 
}

void Bureaucrat ::decrement_grade()
{
    int result;
    result = this->grade + 1;
    try{
        throw_exception(result);
        this->grade = result;
    } 
    catch(int x){
        handle_exception(x);
    } 
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"Destructor of Bureaucrat has been invoked "<<std::endl;
}

void Bureaucrat :: GradeTooHighException()
{
    std::cout<<"the grade is less than 1 "<<std::endl;
}

void Bureaucrat :: GradeTooLowException()
{
    std::cout<<"the grade is more than 150"<<std::endl;
}


std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out <<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<std::endl;
    return (out);
}

void Form  :: signForm(Form & obj){

    if (obj->getStatus())
    {
        std::cout <<this->getName()<<" signed "<<obj->getName()<<std::endl;  
    }
    else{
        std::cout <<this->getName()<<" couldn't sign "<<obj->getName()<<" because its form was not signed "<<std::endl;
    }
}