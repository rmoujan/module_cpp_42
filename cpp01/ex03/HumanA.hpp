/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:13:07 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/06 16:55:58 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
    private:
    std::string name;
    Weapon &obj;
    public:
    HumanA(std::string value,  Weapon &objvalue);
    void setName(std::string value);
    std::string getName();
    Weapon getObj();
    void attack();
    ~HumanA();
};

#endif