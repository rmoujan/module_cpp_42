/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:37:25 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 15:06:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice :: Ice(){

    // std::cout <<"Default constructor of Ice has been invoked"<<std::endl;
    this->type = "ice";
}

Ice :: Ice(std::string const & type){

    // std::cout <<" Constructor by parameter of Ice has been invoked"<<std::endl;
    this->type = type;
}

Ice :: Ice(const Ice &ref){

    // std::cout <<"Copy constructor of Ice has been invoked"<<std::endl;
    *this=ref;
}

Ice& Ice :: operator=(const Ice &ref)
{
    // std::cout <<"copy assignment operator of Ice has been invoked"<<std::endl;
    this->type = ref.type;
    return (*this);
}

// return a pointer to an instance of type Ice !!
AMateria* Ice ::  clone()const{
    return (new Ice());
}

void Ice :: use(ICharacter& target)
{
    std :: cout <<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl;

}

Ice :: ~Ice()
{
    // std::cout <<"Destructor of Ice has been invoked"<<std::endl;
}
