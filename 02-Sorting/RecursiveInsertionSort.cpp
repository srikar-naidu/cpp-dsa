// Recursive Insertion Sort
/*Given an array of integers nums, sort the array in non-decreasing order
using the recursive Insertion Sort algorithm, and return the sorted array.
You must implement Insertion Sort using recursion only.
Do not use loops (like for or while) or built-in sorting functions (sort, Arrays.sort, etc.).
A sorted array in non-decreasing order is an array where each element is greater than or equal to all elements that come before it.*/

#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int i, int n) {
    if (i == n) return;
    int j = i; // Start from the current index i
    while (j > 0 && arr[j - 1] > arr[j]) { // Compare the current element with the previous elements
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
    insertion_sort(arr, i + 1, n); // Recursive call to sort the next element
}


