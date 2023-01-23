/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:18:43 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 14:18:33 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){

    std::cout <<"Default constructor of Cure has been invoked"<<std::endl;
    this->type = "cure";
}

Cure::Cure(std::string const & type){

    std::cout <<" Constructor by parameter of Cure has been invoked"<<std::endl;
    this->type = type;
}

Cure :: Cure(const Cure &ref){

    std::cout <<"Copy constructor of Cure has been invoked"<<std::endl;
    *this=ref;
}

Cure& Cure :: operator=(const Cure &ref)
{
    std::cout <<"copy assignment operator of Cure has been invoked"<<std::endl;
    this->type = ref.type;
    return (*this);
}

//return a pointer to an instance of type Cure !!
AMateria* Cure ::  clone()const{
    return (new Cure());
}

void Cure :: use(ICharacter& target)
{
    std::cout <<"Cure:''* heals "<<target.getName()<<"'s wounds *"<<std::endl;   
}

Cure :: ~Cure()
{
    std::cout <<"Destructor of Cure has been invoked"<<std::endl;
}
