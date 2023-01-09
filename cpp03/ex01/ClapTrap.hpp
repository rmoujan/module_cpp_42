/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:47 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 11:40:13 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{
  private:
  std::string name;
  int hit_points = 10;
  int energy_points = 10;
  int att_damage = 0;
  public:
  //constructor ::
  ClapTrap();
  ClapTrap(std::string value);
  ClapTrap(const ClapTrap &ref);
  ClapTrap & operator=(ClapTrap &ref);
  ~ClapTrap();
  //member functions ::
  void attack (const std :: string& target);
  void takeDamage (unsigned int amount);
  void beRepaired(unsigned int amount);
  //getters and setters ::
  int getHitPoints()const;
  int getEnergyPoints()const;
  int getAttDamage()const;
  std::string getName() const;
};
