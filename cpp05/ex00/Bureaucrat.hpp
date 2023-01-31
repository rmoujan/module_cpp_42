/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 15:35:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat{

    const std::string  name; 
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string const name, int range);
    Bureaucrat(const Bureaucrat& ref);
    ~Bureaucrat();

    std::string getName()const;
    int getGrade()const;

    void decrease_grade();
    void increase_grade();
    
    class GradeTooHighException : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("grade is too high ");
        }
    };
    class GradeTooLowException : public std :: exception{
        public:
        virtual const char* what()const throw(){
            return ("grade is too low");
        }
    };  
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat & obj);

#endif