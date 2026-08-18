// Reverse a number

/*You are given an integer n.
Return the integer formed by placing the digits of n in reverse order.*/

#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        n /= 10; // Remove the last digit from n
    }
    return reversed;
}