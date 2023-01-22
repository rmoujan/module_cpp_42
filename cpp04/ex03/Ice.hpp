/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:28:02 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 12:33:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"


class Ice :public AMateria{

  public:
  Ice();
  Ice(const Ice& ref);
  Ice(std::string const & type);
  Ice&operator=(Const Ice &ref);
  ~Ice();
    Amateria* clone()const;
   void use(ICharacter& target);
    
};