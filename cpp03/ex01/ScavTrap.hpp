/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:39:56 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/11 20:28:24 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
    ScavTrap();
    ScavTrap(std::string value);
    ScavTrap(const ScavTrap & ref);
    ScavTrap& operator=(const ScavTrap &ref);
    ~ScavTrap();
    void attack (const std :: string& target);
    void guardGate();
};



#endif