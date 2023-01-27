/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:26 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/27 13:40:57 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat{

    std::string const name; 
    int grade;
    public:
    Bureaucrat();
    Bureaucrat(std::string const name, int range);
    Bureaucrat(const std::string const name&ref);
    Bureaucrat& operator=(const Bureaucrat &ref);
    ~Bureaucrat();
    std::string getName()const;
    int getGrade()const;
    void increment_grade();
    void decrement_grade();
    
};



#endif