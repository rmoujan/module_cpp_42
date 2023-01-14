/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/14 16:38:59 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
   
    protected:
    
    int energy_pts_sacvtrap;
    
    public:
    ScavTrap();
    ScavTrap(std::string value);
    ScavTrap(const ScavTrap & ref);
    ScavTrap& operator=(const ScavTrap &ref);
    ~ScavTrap();
    void attack (const std :: string& target);
    void guardGate();
    // int getEnergyPoints()const;
    // void setEnergy_pts_ScavTrap( );
    int getEnergy_pts_ScavTrap()const;
};



#endif