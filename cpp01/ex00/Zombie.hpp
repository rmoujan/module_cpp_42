/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:02:30 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/22 16:08:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	
      private:
	  std::string name;
	  public:
	  Zombie();
	  ~Zombie();
	  void announce(void);
	  std::string getName(void);
	  void setName(std::string n);
	  
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif