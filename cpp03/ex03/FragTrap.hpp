/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:20:25 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/14 08:55:23 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
    FragTrap();
    FragTrap(std::string value);
    FragTrap (const FragTrap &ref);
    FragTrap& operator=(const FragTrap &ref);
    ~FragTrap();
    void attack (const std :: string& target);
    void highFivesGuys(void);
    int getHitPoints()const;
    int getAttDamage()const;
};


#endif