//Insertion sort
/*Given an array of integers called nums,
sort the array in non-decreasing order using the insertion sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is
greater than or equal to all preceding elements in the array.*/

#include <bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int>& nums) {
int n = nums.size();
for (int i = 1; i < n; i++) { // Start from the second element and iterate through the array
    int key = nums[i]; // Store the current element as the key to be inserted into the sorted part of the array
    int j = i - 1; // Initialize j to the index of the last element in the sorted part of the array
    while (j >= 0 && nums[j] > key) { // Move elements of the sorted part that are greater than the key to one position ahead of their current position
        nums[j + 1] = nums[j];
        j--;
    }
nums[j + 1] = key; 
}
return nums;
}
