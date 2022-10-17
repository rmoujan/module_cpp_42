/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:13:07 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/17 20:50:24 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
    std::string name;
    Weapon obj;
    public:
    // HumanA();
    HumanA(std::string value, Weapon objvalue);
    void setName(std::string value);
    void setObj(Weapon value);
    std::string getName();
    Weapon getObj();
    void attack();//??
};

#endif