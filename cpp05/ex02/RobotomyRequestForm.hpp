/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:52 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 16:35:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP


// #include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	
	std::string target;

	public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm & obj);
	RobotomyRequestForm & operator = (const RobotomyRequestForm & ref);
	~RobotomyRequestForm();
	
	std::string getTarget()const;
	void  some_noise(void)const ;
	void execute(Bureaucrat const & executor) const ;
	virtual void output() const ;

};

// std::ostream& operator <<(std::ostream& out, const RobotomyRequestForm & obj);

#endif