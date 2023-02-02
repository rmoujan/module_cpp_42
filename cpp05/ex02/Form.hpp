/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:57:03 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:33:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"
//abstract class ;
class Form{
    
    const std:: string name;
    const int grade_signed;
    const int grade_executed;
    bool status;

    public:
    Form();
    Form(std::string name, int g_s_v, int g_e_v);
    Form(const Form &ref);
    Form & operator= (const Form &ref);
    ~Form();
    
    const std::string getName()const;
    const int getGradeSigned()const;
    const int getGradeExecuted()const;

    bool  getStatus()const;

    void beSigned(Bureaucrat &obj);
	
	virtual void execute(Bureaucrat const & executor) const = 0;

    class GradeTooHighException : public std :: exception{
        public:
        virtual const char* what()const throw(){
			
			return ("\033[1;31mone of the grades is too high \033[0m");
        }
    };

    class GradeTooLowException : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("\033[1;31mone of the grades is too low\033[0m");
        }
    };  
	virtual void output() const = 0;
};

std::ostream& operator <<(std::ostream& out, const Form & obj);


#endif