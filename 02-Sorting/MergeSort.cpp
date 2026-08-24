// Merge sort
/*Given an array of integers, nums,
sort the array in non-decreasing order using the merge sort algorithm. Return the sorted array.
A sorted array in non-decreasing order is one in which each element is either
greater than or equal to all the elements to its left in the array.*/

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
vector<int> temp; //Temporary vector to store the merged elements
int left = low, right = mid + 1; //Pointers to the left and right subarrays
while (left <= mid && right <= high) { 
    if (arr[left] <= arr[right])
        temp.push_back(arr[left++]); //left++ because we are moving the pointer to the next element in the left subarray
    else
        temp.push_back(arr[right++]); //right++ because we are moving the pointer to the next element in the right subarray
}
while (left <= mid)
    temp.push_back(arr[left++]); // Copy any remaining elements from the left subarray

while (right <= high)
    temp.push_back(arr[right++]); // Copy any remaining elements from the right subarray
for (int i = low; i <= high; i++) //Copy the merged elements back to the original array
    arr[i] = temp[i - low]; //because we are copying the elements from the temporary vector to the original array, we need to adjust the index by subtracting low from i
}

void mergeSort(vector<int>& arr, int low, int high) {
if (low >= high) // Base case: If the subarray has one or zero elements, it is already sorted
    return;

int mid = (low + high) / 2;

mergeSort(arr, low, mid); // Recursively sort the left half
mergeSort(arr, mid + 1, high); // Recursively sort the right half
merge(arr, low, mid, high); // Merge the two sorted halves
};
