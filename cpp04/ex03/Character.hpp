/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:57:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 14:57:03 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

    AMateria *inventory[4];
    int index;
    // std::string name;

    public:
    //constructors
    Character();
    Character(const Character&ref);
    Character(const std::string name);
    Character& operator=(const Character& ref);
    virtual ~Character();
    // Functions :
    
    //  void equip(AMateria* m);
    //  void unequip(int idx);
    //  void use(int idx, ICharacter& target);
     
    virtual std::string const & getName() const;
    virtual void equip(AMateria * m) ;
    virtual void unequip(int idx) ;
    virtual void use(int idx, ICharacter& target) ;
};


#endif