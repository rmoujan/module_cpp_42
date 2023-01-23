/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:30 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 11:12:29 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

//abstract class 
class AMateria {

    protected:
    std::string type;

    public:

    AMateria();//default param
    AMateria(const AMateria & ref);//copy const
    AMateria& operator=(const AMateria & ref);//copy ass operator
    AMateria(std::string const & type);//const by param
    virtual ~AMateria();//destructor
    
    //member functions :
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;//pure virtual fct
    virtual void use(ICharacter& target);
};

#endif