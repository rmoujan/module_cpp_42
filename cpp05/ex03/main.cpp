/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:33:28 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/02 18:49:43 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp" 

int main()
{
	Intern random;
	Form *test;
		
	test = random.makeForm("HHH", "Reshe");
	if (test != nullptr)
		test->output();
	return (0);
}