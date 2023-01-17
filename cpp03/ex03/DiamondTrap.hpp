/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:31:52 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/15 13:09:15 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAO_HPP
#define DIAMONDTRAO_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap ,public FragTrap
{
    
    private:
    std::string name;
    
    public:
    DiamondTrap();
    DiamondTrap(std::string diamond_name);
    DiamondTrap(const DiamondTrap &ref);
    DiamondTrap& operator=(const DiamondTrap &ref);
    ~DiamondTrap();
    void whoAmI(void);
    void attack(const std :: string& target);
    std::string getName()const;

};

#endif