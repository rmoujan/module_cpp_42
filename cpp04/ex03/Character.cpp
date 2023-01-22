/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:57:34 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 13:00:26 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){

    std::cout <<"Default constructor of Character has been invoked"<<std::endl;
    this->type = "Character";
    the->index = 0;
    this->inventory = new AMateria[4];
}

Character::Character(const std::string name)
{
    std::cout<<"Constructor by parameter of Character has been invoked"<<std::endl;
    this->name = name;
    this->index = 0;
    this->inventory = new AMateria[4];
}

Character::Character(const Character &ref){

    std::cout <<"Copy constructor of Character has been invoked"<<std::endl;
    this=*ref;
}

Character& Character :: operator=(const Character &ref)
{
    std::cout <<"copy assignment operator of Character has been invoked"<<std::endl;
    this->name = ref.name;
    this->index = ref.index;
    //deep cp of inventory
}

Character::~Character()
{
    std::cout <<"Destructor of Character has been invoked"<<std::endl;
}

//add a materia to the inventory 
void equip(AMateria *m)
{
    if (this->index >= 0 && this->index <= 3)
    {
        this->inventory[this->index++] = m;
        std::cout <<"A Materia was added to the inventory successfully"<<std::endl;
    }
}

//delete an existing materia from the inventory 
//they said , don't delete an materia, so hooooow !!!!!
void unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        // this->inventory[this->index++] = m;
        std::cout <<"A Materia was delete from the inventory successfully"<<std::endl;
    }
}
//ScavTrap::attack(target);
void use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <= 3)
    {
        this->inventory[idx].use(target);//don't specify the class, cus u have dervied classes
    }
}
