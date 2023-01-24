/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:46:58 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/24 12:20:38 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource :: IMateriaSource(){

    // std::cout <<"Default constructor of IMateriaSource has been invoked"<<std::endl;
}

IMateriaSource :: IMateriaSource(const IMateriaSource &ref){

    // std::cout <<"Copy constructor of IMateriaSource has been invoked"<<std::endl;
    *this=ref;
}

IMateriaSource& IMateriaSource :: operator=(const IMateriaSource &ref)
{
    // std::cout <<"copy assignment operator of IMateriaSource has been invoked"<<std::endl;
    //must do operation here !!!
    return(*this);
}

IMateriaSource::~IMateriaSource()
{
    // std::cout <<"Destructor of IMateriaSource has been invoked"<<std::endl;
}
