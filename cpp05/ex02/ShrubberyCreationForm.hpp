/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:58:58 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/31 19:20:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBREYCREATIONFORM_HPP
#define SHRUBBREYCREATIONFORM_HPP

class ShrubberyCreationForm : public Form {

	public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & obj);
	ShrubberyCreationForm & operator = (const ShrubberyCreationForm & ref);
	~ShrubberyCreationForm();
}



#endif