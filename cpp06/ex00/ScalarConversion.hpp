/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:55:53 by rmoujan           #+#    #+#             */
/*   Updated: 2023/02/04 16:05:27 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
#define  SCALARCONVERSION_HPP

class ScalarConversion{

	
	public:
	ScalarConversion ();
	ScalarConversion (const ScalarConversion & ref);
	ScalarConversion & operator= (const ScalarConversion & ref);
	~ScalarConversion ();
	int convertToInt();
	
}



#endif