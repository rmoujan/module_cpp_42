/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 09:45:35 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 18:47:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern :: Intern()
{
	std::cout << "\033[92mDefault Constructor of Intern has been invoked \033[0m"<<std::endl;
}

Intern :: Intern(const Intern & ref )
{
    std::cout <<"\033[92mconstructor By Copy of Intern has been invoked \033[0m"<<std::endl;
    *this = ref;
}

Intern& Intern ::  operator=(const Intern& ref){
	std::cout << "\033[Copy  Assignement of Intern has been invoked \033[0m"<<std::endl;
	return (*this);
}

Intern :: ~Intern(){
	
	std::cout << "\033[92mDestructor of Intern has been invoked \033[0m"<<std::endl;
}

void ft_free(Form *objects[], int indice)
{
	int i = 0;
	while (i < 3)
	{
		if (i != indice )
			free(objects[i]);
		i++;
	}
}

Form * Intern :: makeForm(std::string n_form, std::string t_form){
	
	Form* obj1 = new ShrubberyCreationForm(t_form);
    Form* obj2 = new PresidentialPardonForm(t_form);
    Form* obj3 = new RobotomyRequestForm(t_form);
	
	Form *objects[3]={obj1, obj2, obj3};
	std::string tab[3]={"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	int i = 0;
	while (i < 3)
    {
        if (n_form.compare(tab[i]) == 0)
        {
			ft_free(objects, i);
			return objects[i];
        }
        i++;
    }
	ft_free(objects, 10);
	std::cout <<"this type of Form does not exist "<<std::endl;
	return (nullptr);
}