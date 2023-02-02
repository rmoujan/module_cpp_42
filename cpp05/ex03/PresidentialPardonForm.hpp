/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:47 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:30:29 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

// #include "Bureaucrat.hpp"
#include "Form.hpp"


class PresidentialPardonForm : public Form {
	
	std::string target;

	public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm & obj);
	PresidentialPardonForm & operator = (const PresidentialPardonForm & ref);
	~PresidentialPardonForm();
	
	std::string getTarget()const;
	void  inform(void)const ;
	void execute(Bureaucrat const & executor) const ;
	virtual void output() const ;

};

// std::ostream& operator <<(std::ostream& out, const RobotomyRequestForm & obj);

#endif