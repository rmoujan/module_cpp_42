/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:28:02 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 16:27:46 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{

	public:	

	Ice();//Deafault const
	Ice(const Ice& ref);//const by copy
	Ice(std::string const & type);
	Ice&operator=(const Ice &ref);//copy ass
	~Ice();//destructor

	//memeber functions 
	AMateria* clone()const;
	void use(ICharacter& target);
	std::string getType()const;
};

#endif