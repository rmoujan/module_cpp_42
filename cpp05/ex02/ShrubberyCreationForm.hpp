/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:58 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:29:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBREYCREATIONFORM_HPP
#define SHRUBBREYCREATIONFORM_HPP

// #include <iostream>
// #include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : public Form {
	
	std::string target;

	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & obj);
	ShrubberyCreationForm & operator = (const ShrubberyCreationForm & ref);
	~ShrubberyCreationForm();
	
	std::string getTarget()const;
	void  create_file(void)const ;
	void execute(Bureaucrat const & executor) const ;
	virtual void output() const ;

};

// std::ostream& operator <<(std::ostream& out, const ShrubberyCreationForm & obj);

#endif