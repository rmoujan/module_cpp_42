/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:31:52 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/11 13:48:44 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAO_HPP
#define DIAMONDTRAO_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public  FragTrap
{
    
    private:
            std::string name;
    
    public:
    DiamondTrap();
    DiamondTrap(std::string diamond_name, std::string clap_name);
    void whoAmI(void);
    void attack(const std :: string& target);

};


#endif