/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:46:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/22 14:41:48 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>

class IMateriaSource{
  public:
  IMateriaSource();
  IMateriaSource(const IMateriaSource&ref);
  IMateriaSource&operator=(Const IMateriaSource &ref);
  virtual ~IMateriaSource();
   virtual  void learnMateria(Amateria*obj) = 0;
    virtual Amateria* createMateria(std::string & type) = 0;

};

#endif