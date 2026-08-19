//Reverse an array
/*Given an array arr of n elements.
The task is to reverse the given array. The reversal of array should be inplace.*/

#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end) {
    if (start >= end) // Base case
        return;
    swap(arr[start], arr[end]); // Swap elements at start and end
    reverseArray(arr, start + 1, end - 1); // Recursive call to reverse the remaining array
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}