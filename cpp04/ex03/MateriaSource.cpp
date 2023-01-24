/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:13:33 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/24 14:52:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    // std::cout <<"Default constructor of MateriaSource had been invoked"<<std::endl;
    this->inventory[0] = nullptr;
    this->index = 0;
}

MateriaSource::MateriaSource(const MateriaSource &ref){

    // std::cout <<"Copy constructor of MateriaSource had been invoked"<<std::endl;
    *this=ref;
}

MateriaSource& MateriaSource :: operator=(const MateriaSource &ref)
{
    // std::cout <<"copy assignment operator of MateriaSource had been invoked"<<std::endl;
    
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

MateriaSource::~MateriaSource()
{
    std::cout <<"Destructor of MateriaSource has been invoked"<<std::endl;
    if (this->inventory[0])
    {
        for(int i = 0; i <this->index ; i++)
        {
            if (this->inventory[i] != nullptr)
                delete this->inventory[i];
        }
    }
}

void MateriaSource :: learnMateria(AMateria *obj){

    if (this->index >=0 && this->index <= 3)
    {
        this->inventory[this->index++] = obj->clone();
        std::cout <<"A Materia was added to the inventory of MateriaSource successfully"<<std::endl;
    }
    else
        std::cout <<"the inventory is full "<<std::endl;
}

AMateria*  MateriaSource :: createMateria(std::string const & type){


    for (int i = 0; i < this->index; i++)
    {
        if (this->inventory[i] != nullptr)
        {
            if (this->inventory[i]->getType().compare(type) == 0)
            {
                AMateria *new_materia = this->inventory[i]->clone();
                return (new_materia);
            }      
        }
        else{
            std::cout <<"the inventory is empty "<<std::endl;
        }
    }
    std::cout <<" There is no Materia matching this type in the inventory "<<std::endl;
    return (0);
}

void MateriaSource :: output_inventory()
{
    for(int i = 0; i < this->index ; i++)
    {
        std::cout<<"Type is  "<<this->inventory[i]->getType()<<std::endl;
    }
}