/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:13:33 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 14:57:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    std::cout <<"Default constructor of MateriaSource had been invoked"<<std::endl;
    // this->type = "MateriaSource"; ??
    this->inventory = new Amateria[4];
    this->index = 0;
}

MateriaSource::MateriaSource(const MateriaSource &ref){

    std::cout <<"Copy constructor of MateriaSource had been invoked"<<std::endl;
    this=*ref;
}

MateriaSource& MateriaSource :: operator=(const MateriaSource &ref)
{
    std::cout <<"copy assignment operator of MateriaSource had been invoked"<<std::endl;
}

MateriaSource::~MateriaSource()
{
    std::cout <<"Destructor of MateriaSource has been invoked"<<std::endl;
}
//fill up the inventory with amateria 
void MateriaSource :: learnMateria(AMateria *obj){
    if (this->index >=0 && this->index <= 3)
    {
        this->inventory[this->index++] = obj;
    }
}


// Retourne une nouvelle Materia. Celle-ci est une copie de celle 
// apprise précédemment par la MateriaSource et dont le type 
// est le même que celui passé en paramètre. 
// Retourne 0 si le type est inconnu.
Amateria*  MateriaSource :: createMateria(std::string & type){
    
}
