/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:02:00 by rmoujan           #+#    #+#             */
/*   Updated: 2022/10/07 09:15:10 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__
#include <iostream>
// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {

public:

	typedef Account		t;

    //getters
	static int	getNbAccounts( void );//done
	static int	getTotalAmount( void );//done
	static int	getNbDeposits( void );//done
	static int	getNbWithdrawals( void );//done
	static void	displayAccountsInfos( void );//done

	Account( int initial_deposit );//constructor//done
	~Account( void );//destructor//done

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;//done
	int				_nbWithdrawals;

	Account( void );//constructor by default ==>Done

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */