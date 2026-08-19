//Sum of First N Numbers
/*Given an integer N, return the sum of first N natural numbers.
Try to solve this using recursion.*/

#include <bits/stdc++.h>
using namespace std;
int sumOfNumbers(int N) {
    if (N == 0) // Base case
        return 0;
    return N + sumOfNumbers(N - 1); // Recursive call to calculate the sum
}
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Sum of first " << N << " natural numbers is: " << sumOfNumbers(N) << endl;
    return 0;
}