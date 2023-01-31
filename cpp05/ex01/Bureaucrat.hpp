/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 17:42:36 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>

// #include "Form.hpp"

class Form;
class Bureaucrat{

    const std::string  name; 
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string const name, int range);
    Bureaucrat(const Bureaucrat& ref);
	Bureaucrat & operator=(const Bureaucrat& ref);
    ~Bureaucrat();

    std::string getName()const;
    int getGrade()const;

    void decrease_grade();
    void increase_grade();
	
    void signForm(Form & obj);

    class GradeTooHighException : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("\033[31mgrade is too high \033[0m");
        }
    };
    class GradeTooLowException : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("\033[31mgrade is too low\033[0m");
        }
    };  
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat & obj);



#endif