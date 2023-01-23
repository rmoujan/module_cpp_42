/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:13:33 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 15:04:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    // std::cout <<"Default constructor of MateriaSource had been invoked"<<std::endl;
    // this->type = "MateriaSource"; ??
    // this->inventory = new AMateria[4];
    // this->inventory = nullptr;
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
    // if (this->inventory)
    //     delete []inventory;
    // if (ref.inventory)
    // {
        // this->inventory = new AMateria[4];
        this->index = 0;
        while (this->index < ref.index)
        {
            this->inventory[this->index] = ref.inventory[this->index];
            this->index++;
        }
    // }
    // else
    //     this->inventory = nullptr;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    // std::cout <<"Destructor of MateriaSource has been invoked"<<std::endl;
    // delete []inventory;
}


//fill up the inventory with amateria 
//they said putt the copy of this obj not how !!!, so HOOOOOW 
//==>rah fash this->inventory[this->index++] = obj; kayt3yt lcall lcopy const
void MateriaSource :: learnMateria(AMateria *obj){

    if (this->index >=0 && this->index <= 3)
    {
        //get the copy of obj ana put it into inventory !!!
        this->inventory[this->index++] = obj;
        // std::cout <<"A Materia was added to the inventory of MateriaSource successfully"<<std::endl;
    }
    // else
    //     std::cout <<"the inventory is full "<<std::endl;
}


// Retourne une nouvelle Materia. 
// Celle-ci est une copie de celle apprise précédemment par la MateriaSource
// et dont le type est le même que celui passé en paramètre. 
// Retourne 0 si le type est inconnu.
AMateria*  MateriaSource :: createMateria(std::string const & type){
    
    if (type.compare("cure") || type.compare("ice"))
    {
        for (int i = 0; i < this->index; i++)
        {
            //if they are equal , create a new copy and return it 
            if (this->inventory[i]->getType().compare(type) == 0)
            {
                AMateria *new_materia = this->inventory[i];
                return (new_materia);
            }
        }
    }
    else
    {
        // std::cout <<" There is no Materia matching this type in the inventory "<<std::endl;
        return (0);
    }
    return (0);
}
