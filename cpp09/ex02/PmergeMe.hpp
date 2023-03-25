/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:15 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/24 21:48:09 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>   
#include <deque>
#include <iterator>
#include <ctime>
#include <ratio>
#include <chrono>

void sort(std::vector<long double> &vec, std::deque<long double> &li,std::clock_t &time_span1, std::clock_t&time_span2);
// void sort(std::vector<int> &vec);
#endif