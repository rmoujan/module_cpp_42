/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:12 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/24 21:49:07 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void merge(T& arr, long double l, long double m, long double r) {

    long double n1 = m - l + 1;
    long double n2 = r - m;
    T L(n1), R(n2);
    for (long double i = 0; i < n1; i++) 
		L[i] = arr[l + i];
    for (long double i = 0; i < n2; i++) 
		R[i] = arr[m + 1 + i];
    long double i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

template <typename T>
void insertionSort(T& arr, long double l, long double r) {
    for (long double i = l + 1; i <= r; i++) {
        long double key = arr[i];
        long double j = i - 1;
        while (j >= l && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template <typename T>
void merge_insert(T& arr, long double start, long double len) {
    if (len - start <= 10) {
        insertionSort(arr, start, len);
    } 
	else {

        long double m = start + (len - start) / 2;
        merge_insert(arr, start, m);
        merge_insert(arr, m + 1, len);
        merge(arr, start, m, len);
    }
}


void sort(std::vector<long double> &vec, std::deque<long double> &li,std::clock_t &time_span1, std::clock_t&time_span2)
{
	int size_vec = vec.size();
	int size_li = li.size();

	// std::chrono::high_resolution_clock::time_point time1 = std::chrono:: high_resolution_clock::now();
	// merge_insert(vec, 0, size_vec - 1);
	// std::chrono:: high_resolution_clock::time_point time2 = std::chrono:: high_resolution_clock::now();
	// time_span1 = std::chrono:: duration_cast<std::chrono::microseconds>(time2 - time1);
    
	// std::chrono:: high_resolution_clock::time_point time3 = std::chrono:: high_resolution_clock::now();
	// merge_insert(li, 0, size_li  - 1);
	// std::chrono:: high_resolution_clock::time_point time4 = std::chrono:: high_resolution_clock::now();
	// time_span2 = std::chrono:: duration_cast<std::chrono::microseconds>(time4 - time3);


    std::clock_t c_start = std::clock();
    merge_insert(vec, 0, size_vec - 1);
    std::clock_t c_end = std::clock();
    time_span1 = c_end -c_start;
    std::clock_t c_startt = std::clock();
    merge_insert(li, 0, size_li - 1);
    std::clock_t c_endd = std::clock();
    time_span2 = c_endd -c_startt;

}