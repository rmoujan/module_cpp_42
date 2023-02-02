/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:55 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:23:01 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm :: ShrubberyCreationForm()
{
	std::cout <<"Default constructor of ShrubberyCreationForm has been invoked "<<std::endl;
}

ShrubberyCreationForm :: ShrubberyCreationForm(std::string value):Form("Shrubbery", 145,157){
	std::cout <<"Constructor by Parameter of ShrubberyCreationForm has been invoked "<<std::endl;
	this->target = value;
}

ShrubberyCreationForm :: ShrubberyCreationForm(const ShrubberyCreationForm & obj)
{
	std::cout <<"Constructor by Copy of ShrubberyCreationForm has been invoked "<<std::endl;
	*this = obj;
}

ShrubberyCreationForm &  ShrubberyCreationForm :: operator = (const ShrubberyCreationForm & ref){
	std::cout <<"Copy Assignement of ShrubberyCreationForm has been invoked "<<std::endl;
	this->target = ref.target;
	return *this;
}

ShrubberyCreationForm ::~ShrubberyCreationForm()
{
	std::cout <<"Destructor of ShrubberyCreationForm has been invoked "<<std::endl;
}

std::string ShrubberyCreationForm :: getTarget()const{
	return (target);
}

void  ShrubberyCreationForm :: create_file(void)const
{
    std::string name = this->target + "_Shrubbery";

    std::ofstream new_file(name);
	if (new_file)
	{
		new_file << "        &&& &&  & &&\n";
		new_file << "    && &\\/&\\|& ()|/ @, &&\n";
		new_file << "      &\\/(/&/&||/& /_/)_&/_&\n";
		new_file << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
		new_file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
		new_file << "&&   && & &| &| /& & % ()& /&&\n";
		new_file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
		new_file << "     &&     \\|||\n";
		new_file << "             |||\n";
		new_file << "             |||\n";
		new_file << "             |||\n";
		new_file << "       , -=-~  .-^- _\n";
		new_file.close();	
	}
	else
		std::cout <<"Error Occured When Opening The File "<<std::endl;
}


//define new behaviour of the ovveride fct :
void ShrubberyCreationForm :: execute(Bureaucrat const & executor) const {
	
	try{
		if (this->getStatus() && executor.getGrade() <= this->getGradeExecuted())
		{
			this->create_file();
		}
		else
            throw Form :: GradeTooLowException();
		
	}
	catch(std::exception &e)
	{
		std::cout <<e.what()<<std::endl;
	}
}

void ShrubberyCreationForm :: output()const
{
	std::cout <<"\033[33mShrubbery's Informations :    "<<std::endl;
	std::cout <<"Shrubbery's Name is           "<<getName()<<std::endl;
	std::cout <<"Shrubbery's Target is           "<<getTarget()<<std::endl;
	std::cout <<"Shrubbery's grade_signed is   "<<getGradeSigned()<<std::endl;
	std::cout <<"Shrubbery's grade_executed is "<<getGradeExecuted()<<std::endl;
	std::cout <<"Shrubbery's status is         "<<getStatus()<<"\033[0m"<<std::endl;
}