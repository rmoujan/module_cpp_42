/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:27:31 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/16 20:43:50 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB{
    private:
    std::string name;
    Weapon obj;
    public:
    HumanB();
    HumanB(std::string value);
    void setName(std::string value);
    void setObj(Weapon value);
    std::string getName();
    Weapon getObj();
    void attack();//??
};

#endif