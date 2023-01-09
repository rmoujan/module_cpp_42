/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 20:51:29 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/09 14:17:02 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap{

  private:
  
  std::string name;
  int hit_points;
  int energy_points;
  int att_damage;

  public:
  
  //constructor ::
  ClapTrap();
  ClapTrap(std::string value);
  ClapTrap(const ClapTrap &ref);
  ClapTrap & operator=(const ClapTrap &ref);
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
  void setName(std::string value);
};