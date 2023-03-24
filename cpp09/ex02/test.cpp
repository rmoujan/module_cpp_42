// #include <iostream>
// #include <vector>
// using namespace std;

// const int kInsertionSortThreshold = 10;

// void merge(vector<int>& arr, int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     vector<int> L(n1), R(n2);
//     for (int i = 0; i < n1; i++) L[i] = arr[l + i];
//     for (int i = 0; i < n2; i++) R[i] = arr[m + 1 + i];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void insertionSort(vector<int>& arr, int l, int r) {
//     for (int i = l + 1; i <= r; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= l && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// void merge_insert(vector<int>& arr, int l, int r) {
//     if (r - l <= kInsertionSortThreshold) {
//         insertionSort(arr, l, r);
//     } 
// 	else {

//         int m = l + (r - l) / 2;
//         merge_insert(arr, l, m);
//         merge_insert(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int main() {
//     vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
//     int n = arr.size();
// 	std::cout <<"size is "<<n<<std::endl;
//     merge_insert(arr, 0, n - 1);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    // Create a vector of random integers
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Start the timer
    auto start_time = std::chrono::high_resolution_clock::now();

    // Sort the vector using std::sort
    std::sort(v.begin(), v.end());

    // Stop the timer and calculate the duration
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

    // Print the sorted vector and the sorting time
    std::cout << "Sorted vector: ";
    for (int x : v) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    std::cout << "Sorting time: " << duration.count() << " microseconds" << std::endl;

    return 0;
}
