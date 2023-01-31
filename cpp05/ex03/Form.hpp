/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:57:03 by rmoujan           #+#    #+#             */
/*   Updated: 2023/01/29 13:42:42 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostram>
#include "Bureaucrat.hpp"
class Form{
    
    const std:: string name;
    bool status;
    const int grade_signed;
    const int grade_executed;
    public:
    Form();
    Form(std::string name, int g_s_v, int g_e_v);
    Form(const Form &ref);
    Form & operator= (const Form &ref);
    ~Form();
    
    const std::string getName()const;
    bool getSigned_var()const;
    const int getGradeSigned()const;
    const int getGradeExecuted()const;
    
    void beSigned(Bureaucrat &obj);
    
    void GradeTooHighException();
    void GradeTooLowException();
    void throw_exception(int x);
    void handle_exception(int x);
    
 
}
std::ostream& operator <<(std::ostream& out, const Form & obj);
