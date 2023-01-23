/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:13:35 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/23 11:14:43 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

// #include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{

    AMateria *inventory;
    int index;
    public:

    MateriaSource();
    MateriaSource(const MateriaSource & ref);
    MateriaSource&operator=(const MateriaSource & ref);
    ~MateriaSource();

	//member fctes :
    void learnMateria(AMateria *obj);
    AMateria* createMateria(std::string const & type);
};


#endif