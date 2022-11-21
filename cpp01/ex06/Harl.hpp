/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:04:12 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/21 12:47:24 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#include <iostream>
using namespace std;

enum levels { DEBUG = 1, INFO = 2, WARNING = 3, ERROR = 4};

// int main() {

//     levels l;

//     l = level;
//     cout << "Summer = " << s << endl;

//     return 0;
// }


class Harl{

    private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    public:
    void complain(std::string level);
};

#endif