/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:46:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 14:49:18 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

//Abstract class :
class IMateriaSource{

	public:

	IMateriaSource();
	IMateriaSource(const IMateriaSource& ref);
	IMateriaSource&operator=(const IMateriaSource& ref);
	virtual ~IMateriaSource();
	
	//member fctes:
	virtual  void learnMateria(AMateria *obj) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif