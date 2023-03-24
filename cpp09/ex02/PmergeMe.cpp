/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:12 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/24 03:31:55 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
void merge(T& arr, int l, int m, int r) {

    int n1 = m - l + 1;
    int n2 = r - m;
    T L(n1), R(n2);
    for (int i = 0; i < n1; i++) 
		L[i] = arr[l + i];
    for (int i = 0; i < n2; i++) 
		R[i] = arr[m + 1 + i];
    int i = 0, j = 0, k = l;
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
void insertionSort(T& arr, int l, int r) {
    for (int i = l + 1; i <= r; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= l && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

template <typename T>
void merge_insert(T& arr, int start, int len) {
    if (len - start <= 10) {
        insertionSort(arr, start, len);
    } 
	else {

        int m = start + (len - start) / 2;
        merge_insert(arr, start, m);
        merge_insert(arr, m + 1, len);
        merge(arr, start, m, len);
    }
}


void sort(std::vector<int> &vec, std::deque<int> &li,std::chrono:: duration<double> &time_span1, std::chrono:: duration<double> &time_span2)
{
	int size_vec = vec.size();
	int size_li = li.size();

	std::chrono::high_resolution_clock::time_point time1 = std::chrono:: high_resolution_clock::now();
	merge_insert(vec, 0, size_vec - 1);
	std::chrono:: high_resolution_clock::time_point time2 = std::chrono:: high_resolution_clock::now();
	time_span1 = std::chrono:: duration_cast<std::chrono:: duration<double> >(time2 - time1);
	std::chrono:: high_resolution_clock::time_point time3 = std::chrono:: high_resolution_clock::now();
	merge_insert(li, 0, size_li  - 1);
	std::chrono:: high_resolution_clock::time_point time4 = std::chrono:: high_resolution_clock::now();
	time_span2 = std::chrono:: duration_cast<std::chrono:: duration<double> >(time4 - time3);

}