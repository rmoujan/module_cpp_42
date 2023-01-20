/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:05:19 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/20 13:19:05 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	
	// std::string ideas[100]; this is not worked
    std::string *ideas;
    public:
	Brain();
    Brain(const Brain &ref);
    Brain& operator=(const Brain &ref);
    // std::string getIdeas()const;
    // void setIdeas(std::string value);
    ~Brain();
};

#endif
