/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:26:05 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 15:29:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

      private:
	  std::string name;
	  public:
	  Zombie();//const
	  ~Zombie();//destr
	  void announce(void);
	  std::string getName(void);
	  void setName(std::string n);
};


Zombie*   zombieHorde( int N, std::string name );

#endif