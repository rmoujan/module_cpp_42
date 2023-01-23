/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:39:22 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 10:33:01 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

ICharacter::ICharacter(){

    // std::cout <<"Default constructor of ICharacter has been invoked"<<std::endl;
    this->name = "ICharacter"; 
}

ICharacter::ICharacter(const ICharacter &ref){

    // std::cout <<"Copy constructor of ICharacter has been invoked"<<std::endl;
    *this=ref;
}

ICharacter& ICharacter :: operator=(const ICharacter &ref)
{
    // std::cout <<"copy assignment operator of ICharacter has been invoked"<<std::endl;
    //no operations to do 
    this->name = ref.name;
    return (*this);
}

ICharacter::~ICharacter()
{
    // std::cout <<"Destructor of ICharacter has been invoked"<<std::endl;
}

// std::string const & ICharacter :: getName() const{
//     return this->name;
// }

// void ICharacter :: equip(AMateria* m) {

// }

// void ICharacter :: unequip(int idx) {

// }

// void  ICharacter :: use(int idx, ICharacter& target) {
    
// }