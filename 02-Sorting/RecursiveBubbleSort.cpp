// Recursive Bubble Sort
/*Given an array of integers nums, sort the array in non-decreasing order using the recursive Bubble Sort algorithm,
and return the sorted array.
You must implement Bubble Sort using recursion only.
Do not use built-in sorting functions (sort, sorted, Arrays.sort, etc.).
A sorted array in non-decreasing order is an array where each element is greater than or equal to the previous one.*/

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n) {
    if (n == 1) return;
    int didSwap = 0; 
    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1; // Mark that we did a swap
        }
    }
    if (didSwap == 0) return;
    bubble_sort(arr, n - 1); // Recursive call to sort the remaining elements
}

