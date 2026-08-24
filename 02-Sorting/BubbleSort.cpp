//Bubble Sort
/*Given an array of integers called nums,
sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element
is greater than or equal to all preceding elements in the array.*/

#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& arr) {
int n = arr.size();
for (int i = n - 1; i >= 0; i--) { //Iterate from the end of the array to the beginning
int didSwap = 0; //Use two nested loops to iterate over the array
for (int j = 0; j <= i - 1; j++) { //Compare adjacent elements and swap them if they are in the wrong order
    if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);  //Swap arr[j+1] with arr[i]
        didSwap = 1; //Set didSwap to 1 to indicate that a swap was made
    }
}
if (didSwap == 0) { //If no swaps were made in the inner loop, the array is already sorted, so we can break out of the loop early
break;}
}
cout << "After Using Bubble Sort:\n";
for (int num : arr) { //Print the sorted array after sorting
cout << num << " ";
}
cout << endl;
};
