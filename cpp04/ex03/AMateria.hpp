/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 19:22:30 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 12:24:52 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
//abstract class 
class AMateria {
    protected:
    std::string type;
        //    [...]
    public:
    AMateria(std::string const & type);
    AMateria();
    AMateria(const AMateria & ref);
    AMateria& operator=(const AMateria & ref);
    virtual ~AMateria();
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;//pure virtual fct
    virtual void use(ICharacter& target);
};

#endif