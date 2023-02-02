/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:45:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 18:41:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
class Intern{

    
    public:
	
    Intern();
    Intern(const Intern& ref);
	Intern & operator=(const Intern& ref);
    ~Intern();

	Form * makeForm(std::string name_form, std::string target_form);
};


#endif