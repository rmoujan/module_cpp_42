/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 21:13:58 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/10 22:52:07 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
template <typename T>

class MutantStack : public std ::stack<T>{

	public:
	using std::stack<T>::c; 
   	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(){}
	MutantStack(const MutantStack & ref)
	{
		*this = ref;
	}
	MutantStack & operator=(const MutantStack & ref)
	{
		(void )ref;
		return (*this);
	}
	~MutantStack(){}
	iterator begin()
	{
		return (c.begin());
	}
	iterator end()
	{
		return (c.end());
	}	
};


#endif