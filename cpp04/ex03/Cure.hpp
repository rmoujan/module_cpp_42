/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:13:23 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 12:29:33 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
  
	public:

	Cure();
	Cure(std::string const & type);
	Cure(const Cure& ref);
	Cure&operator=(const Cure& ref);
	~Cure();
	Amateria* clone()const;
	void use(ICharacter& target);
	
};

#endif;