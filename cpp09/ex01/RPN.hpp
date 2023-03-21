/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:37:10 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/20 21:04:34 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <sstream>
#ifndef RPN_HPP
#define RPN_HPP


class RPN{
    public:
    RPN();
	RPN(const RPN &obj);
	RPN &operator=(const RPN &obj);
	~RPN();
    void calcul(std:: string data);
};


#endif