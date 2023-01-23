/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:20 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 09:43:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){

    std::cout <<"Default constructor of AMateria has been invoked"<<std::endl;
    this->type = "AMateria";
}

AMateria::AMateria(std::string const & type){

    std::cout <<" Constructor by parameter of AMateria has been invoked"<<std::endl;
    this->type = type;
}


AMateria::AMateria(const AMateria &ref){

    std::cout <<"Copy constructor of AMateria has been invoked"<<std::endl;
    this=*ref;
}

AMateria& AMateria :: operator=(const AMateria &ref)
{
    std::cout <<"copy assignment operator of AMateria has been invoked"<<std::endl;
    this->type = ref.type;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout <<"Destructor of AMateria has been invoked"<<std::endl;
}

std::string const & getType()const
{
    return (type);
}
//I think balama implemetiha !!!
void use(ICharacter & target)
{
    std::cout <<" NOTHING FROM AMATERIA "<<std::endl;
}