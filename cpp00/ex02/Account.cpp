/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:03:12 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/07 09:15:00 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

//set the getters :
int Account :: 	getNbAccounts( void )
{
    return(_nbAccounts);   
}

int Account :: 	getTotalAmount( void )
{
    return(_totalAmount);   
}

int Account :: 	getNbDeposits( void )
{
    return(_totalNbDeposits);   
}

int Account :: 	getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);   
}
//constructor by default
Account::Account(void)
{
    std::cout<<"obejct is created successfully"<<std::endl;
}

//constructor by parameter
Account::Account(int initial_deposit)
{
    /*I don't know which depost will be use , the static one or 
    the normal == > I think the normal one */
    _nbDeposits = initial_deposit;
}
//destructor ;
Account::~Account()
{
    std::cout<<"the destructor is invoked"<<std::endl;
}