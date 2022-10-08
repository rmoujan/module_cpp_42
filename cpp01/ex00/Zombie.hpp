/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:02:30 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/08 15:24:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #ifndef HEADER_FILE
// #define HEADER_FILE

#ifndef ZOMBIE_H
#define ZOMBIE_H

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );
// void announce(void);
// void setName(std::string n);
// std::string  getName(void);
#endif