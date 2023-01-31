/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/29 13:22:25 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include "Form.hpp"
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
    void increment_grade();
    void decrement_grade();
    void GradeTooHighException();
    void GradeTooLowException();
    void throw_exception(int x);
    void handle_exception(int x);
    void signForm(Form & obj);
    
};

std::ostream& operator <<(std::ostream& out, const Bureaucrat & obj);



#endif