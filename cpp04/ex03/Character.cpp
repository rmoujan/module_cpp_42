/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:57:34 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 17:48:49 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character :: Character(){

    // std::cout <<"Default constructor of Character has been invoked"<<std::endl;
    this->name = "Character";
    this->index = 0;
    // this->inventory = new AMateria[4];
    // this->inventory = nullptr;
}

Character :: Character(const std::string name)
{
    // std::cout<<"Constructor by parameter of Character has been invoked"<<std::endl;
    this->name = name;
    this->index = 0;
    // this->inventory = new AMateria[4];
    // this->inventory = nullptr;
}

Character :: Character(const Character &ref){

    // std::cout <<"Copy constructor of Character has been invoked"<<std::endl;
    *this=ref;
}

//deep copy Donnnnnnnnne
Character& Character :: operator=(const Character &ref)
{
    // std::cout <<"copy assignment operator of Character has been invoked"<<std::endl;
    this->name = ref.name;
    // this->index = ref.index;
    //deep cp of inventory :(must delete the old ones bfr copy the new ones in this->inventory):
    if (this->inventory[0] != nullptr)
    {
        for (int i = 0; i < this->index; i++)
        {
            if (this->inventory[i] != nullptr)
                delete this->inventory[i];
        }
    }
    if (ref.inventory[0])
    {
        this->index = 0;
        while (this->index < ref.index)
        {
            this->inventory[this->index] = ref.inventory[this->index];
            this->index++;    
        }   
    }
    else
        this->inventory[0] = nullptr;
    return (*this);
}

Character :: ~Character()
{
    // std::cout <<"Destructor of Character has been invoked"<<std::endl;
    for (int i = 0; i < this->index; i++)
    {
        if (this->inventory[i] != nullptr)
            delete this->inventory[i];
    }
}

//add a materia to the inventory of character
void Character :: equip(AMateria *m)
{
    if (this->index >= 0 && this->index <= 3)
    {
        this->inventory[this->index++] = m;
        // std::cout <<"A Materia was added to the inventory of Character successfully"<<std::endl;
    }
    // else
    //     std::cout <<"the inventory is full "<<std::endl;
}

//delete an existing materia from the inventory 
//they said , don't delete an materia, so hooooow !!!!!

void Character :: unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
    {
        // this->inventory[this->index++] = m;
        // std::cout <<"A Materia was delete from the inventory successfully"<<std::endl;
    }
}

//Name_class::name_fct(target);
void Character :: use(int idx, ICharacter& target)
{
    // std::cout <<"this index is "<<this->index<<std::endl;
    if (idx >= this->index && idx <= this->index)
    {
        if (this->inventory[0] != nullptr)
        {
            this->inventory[idx - 1]->use(target);//don't specify the class, cus u have dervied classes
            
        }
        else
            std::cout<<"the inventory is empty "<<std::endl;
    }
    else
        std::cout <<"Index out of rang / or this Materia does not exist "<<std::endl;
}

std::string const & Character :: getName() const{
    
    return (this->name);
}

void Character :: output_inventory()
{
    std::cout<<"Index is "<<this->index<<std::endl;
    for(int i = 0; i < this->index ; i++)
    {
        std::cout<<"Type is  "<<this->inventory[i]->getType()<<std::endl;
    }
}

// AMateria const ** Character ::  getInventory()const{
//     return this->inventory;
// }