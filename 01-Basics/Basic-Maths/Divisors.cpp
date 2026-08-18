// Divisors of a number

/*You are given an integer n. You need to find all the divisors of n.
Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.*/

#include<bits/stdc++.h>
using namespace std;
vector<int> findDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            divisors.push_back(i); // Add the divisor
            if (i != n / i) { // Check to avoid adding the square root twice
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end()); // Sort the divisors in ascending order
    return divisors;
}