/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:57:34 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/24 11:44:20 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character :: Character(){

    std::cout <<"Default constructor of Character has been invoked"<<std::endl;
    this->name = "Character";
    this->index = 0;
     this->inventory[0] = nullptr;
    // this->inventory = nullptr;
}

Character :: Character(const std::string name)
{
    std::cout<<"Constructor by parameter of Character has been invoked"<<std::endl;
    this->name = name;
    this->index = 0;
     this->inventory[0] = nullptr;
    // this->inventory = nullptr;
}

Character :: Character(const Character &ref){

    // std::cout <<"Copy constructor of Character has been invoked"<<std::endl;
    *this=ref;
}

//deep copy Donnnnnnnnne
Character& Character :: operator=(const Character &ref)
{
    std::cout <<"copy assignment operator of Character has been invoked"<<std::endl;
    this->name = ref.name;
        for (int i = 0; i < this->index; i++)
        {
            if (this->inventory[i] != nullptr)
                delete this->inventory[i];
        }
        this->index = 0;
        for (int i = 0; i < ref.index; i++)
        {
            std::cout <<"inside while "<<std::endl;
            if (ref.inventory[i] != nullptr)
            {
                this->inventory[i] = (ref.inventory[i])->clone();
                this->index++; 
            }
            else
            {
                this->inventory[i] = nullptr;
                this->index++;
            }
        }  
    return (*this);
}

Character :: ~Character()
{
    std::cout <<"Destructor of Character has been invoked"<<std::endl;
    for (int i = 0; i < this->index; i++)
    {
        if (this->inventory[i] != nullptr)
            delete this->inventory[i];
    }
}

//add a materia to the inventory of character
void Character :: equip(AMateria *m)
{
    int flag;
    flag = 0;
    if (this->index >= 0 && this->index <= 3)
    {
        for(int i = 0; i < this->index; i++)
        {
            if (this->inventory[i] != nullptr)
            {
                if (this->inventory[i] == m)
                {
                    flag  = 1;
                    std::cout <<"this Materia is already exist in inventory "<<std::endl;
                    break;
                }
                    
            }
        }
        if (flag == 0)
        {
            this->inventory[this->index++] = m;
            // std::cout <<"A Materia was added to the inventory of Character successfully"<<std::endl;   
        }
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
        if (this->inventory[idx] != nullptr)
        {
            this->inventory[idx] = nullptr;
            // std::cout <<"A Materia was delete from the inventory successfully"<<std::endl;
        }
        // this->inventory[this->index++] = m;
    }
    else
        std::cout <<"this materia is not exist in the inventory"<<std::endl;
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
    // std::cout<<"Index is "<<this->index<<std::endl;
    // std::cout <<"OUTPUT THE INVENTORY OF CHARS "<<std::endl;
    
    for(int i = 0; i < this->index ; i++)
    {
        if (this->inventory[i] != nullptr)
        {
            std::cout<<"Type is  "<<this->inventory[i]->getType()<<std::endl;
        }
    }
}

// AMateria const ** Character ::  getInventory()const{
//     return this->inventory;
// }