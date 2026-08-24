// Quick Sort
/*Given an array of integers called nums, sort the array in non-decreasing order
using the quick sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is
greater than or equal to all preceding elements in the array.*/

#include <bits/stdc++.h>
using namespace std;
void quickSort(vector<int>& arr, int low, int high) {
if (low < high) { // Base case: If the subarray has one or zero elements, it is already sorted
    int pivotIndex = partition(arr, low, high); // Partition the array and get the pivot index
    quickSort(arr, low, pivotIndex - 1); // Recursively sort the left subarray
    quickSort(arr, pivotIndex + 1, high); // Recursively sort the right subarray
    }
}

int partition(vector<int>& arr, int low, int high) {
int pivot = arr[high]; // Choose the last element as the pivot
int i = low - 1; // Initialize the index of the smaller element
for (int j = low; j < high; j++) { // Iterate through the subarray
    if (arr[j] <= pivot) { // If the current element is smaller than or equal to the pivot
        i++;
        swap(arr[i], arr[j]);
    }
}

swap(arr[i + 1], arr[high]); // Place the pivot in its correct position
return i + 1;
}

