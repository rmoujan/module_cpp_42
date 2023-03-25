/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:10:12 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/25 01:42:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename T>
T merge(T left, T right) {
    T result;
    long double i = 0, j = 0;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            result.push_back(left[i]);
            i++;
        } else {
            result.push_back(right[j]);
            j++;
        }
    }
    while (i < left.size()) {
        result.push_back(left[i]);
        i++;
    }
    while (j < right.size()) {
        result.push_back(right[j]);
        j++;
    }
    return result;
}

template <typename T>
void merge_sort(T &arr, int l, int r) {

    if (r - l <= 8) {
        for (int i = l+1; i <= r; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= l && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    } else {
        int mid = l + (r - l) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);
        T left(arr.begin() + l, arr.begin() + mid+1);
        T right(arr.begin() + mid+1, arr.begin() + r+1);
        T merged = merge(left, right);
        int k = 0;
        for (int i = l; i <= r; i++) {
            arr[i] = merged[k];
            k++;
        }
    }
}

void sort(std::vector<long double> &vec, std::deque<long double> &li,std::clock_t &time_span1, std::clock_t&time_span2)
{
	int size_vec = vec.size();
	int size_li = li.size();

    std::clock_t c_start = std::clock();
    merge_sort(vec, 0, size_vec - 1);
    std::clock_t c_end = std::clock();

    time_span1 = c_end - c_start;

    std::clock_t c_startt = std::clock();
    merge_sort(li, 0, size_li - 1);
    std::clock_t c_endd = std::clock();
    time_span2 = c_endd - c_startt;

}