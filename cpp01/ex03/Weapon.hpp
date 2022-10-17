/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:50:18 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/17 20:30:11 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
    private:
    std::string type;
    public:
    Weapon();
    Weapon(std::string value);
    std::string const &getType();
    // std::string& Weapon ::getType();

    void setType(std::string value);
};



#endif