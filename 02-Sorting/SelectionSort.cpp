//Selection Sort
/*Given an array of integers nums,
sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is
greater than or equal to all previous elements in the array.*/

#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current index is the minimum
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[minIndex]) { // Find the index of the minimum element in the unsorted part
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]); // Swap the found minimum element with the first element of the unsorted part
    }
}
int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selectionSort(vector<int>(arr, arr + n));
    return 0;
}







