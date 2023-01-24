/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:13:33 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/24 11:45:26 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    // std::cout <<"Default constructor of MateriaSource had been invoked"<<std::endl;
    // this->type = "MateriaSource"; ??
    // this->inventory = new AMateria[4];
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
    //starting deep copy :
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
    // std::cout <<"Destructor of MateriaSource has been invoked"<<std::endl;
    if (this->inventory[0])
    {
        for(int i = 0; i <this->index ; i++)
        {
            if (this->inventory[i] != nullptr)
                delete this->inventory[i];
        }
    }
}


//fill up the inventory with amateria 
//they said putt the copy of this obj not how !!!, so HOOOOOW 
//==>rah fash this->inventory[this->index++] = obj; kayt3yt lcall lcopy const
void MateriaSource :: learnMateria(AMateria *obj){

    if (this->index >=0 && this->index <= 3)
    {
        //get the copy of obj ana put it into inventory !!!
        this->inventory[this->index++] = obj;
        std::cout <<"A Materia was added to the inventory of MateriaSource successfully"<<std::endl;
    }
    // else
    //     std::cout <<"the inventory is full "<<std::endl;
}


// Retourne une nouvelle Materia. 
// Celle-ci est une copie de celle apprise précédemment par la MateriaSource
// et dont le type est le même que celui passé en paramètre. 
// Retourne 0 si le type est inconnu.
AMateria*  MateriaSource :: createMateria(std::string const & type){


    for (int i = 0; i < this->index; i++)
    {
        // std::cout<<"Inise creatmateria "<<std::endl;
        //if they are equal , create a new copy and return it 
        if (this->inventory[i] != nullptr)
        {
            if (this->inventory[i]->getType().compare(type) == 0)
            {
                std::cout <<"1111"<<std::endl;
                AMateria *new_materia = this->inventory[i];
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
    std::cout<<"Index is "<<this->index<<std::endl;
    for(int i = 0; i < this->index ; i++)
    {
        std::cout<<"Type is  "<<this->inventory[i]->getType()<<std::endl;
    }
}