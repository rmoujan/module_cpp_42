/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:23 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 15:32:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("Bureaucrat")
{
    std::cout <<"Default constructor of Bureaucrat has been invoked "<<std::endl;
    this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string const name_v, int value):name(name_v)
{
    std::cout <<"constructor By Parameter of Bureaucrat has been invoked "<<std::endl;
    this->grade = value;
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
		std::cout <<"the Grade is incremented successfully"<<std::endl;
    }
    catch(std::exception &e){
        std::cout <<"U cannot incremented the grade cuz "<< e.what()<<std::endl;
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
		std::cout <<"the Grade is decremented successfully"<<std::endl;
    }
    catch(std::exception &e){
        std::cout <<"U cannot decremented the grade cuz "<<e.what()<<std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"Destructor of Bureaucrat has been invoked "<<std::endl;
}

std::ostream & operator<<(std::ostream &out, const Bureaucrat &obj)
{
    out <<obj.getName()<<", bureaucrat grade "<<obj.getGrade()<<std::endl;
    return (out);
}