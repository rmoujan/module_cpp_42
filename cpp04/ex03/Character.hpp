/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:57:32 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 12:59:43 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Icharacter.hpp"
#include "AMateria.hpp"

class Character :public ICharacter{

    AMateria *inventory;
    int index;
    std::string name;

    public:
    //constructors
    Character();
    Character(const Character&ref);
    Character(const std::string name);
    Character&operator=(const Character&ref);
    Character(std::string name_value);
    virtual ~Character();
    // Functions :
     void equip(AMateria* m);
     void unequip(int idx);
     void use(int idx, ICharacter& target);
};


#endif