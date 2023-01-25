/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:34:37 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/25 09:23:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>

#include "AMateria.hpp"
//abstract class :
class AMateria;
class ICharacter {
    protected:
    std::string name;

    public:
    ICharacter();//default const
    ICharacter(const ICharacter&ref);
    virtual ICharacter&operator=(const ICharacter&ref);
    virtual ~ICharacter();
    //member fctes :
    //pure virtual fctes 
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria * m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
    virtual void output_inventory() = 0;
};


#endif