//Prime Number
/*You are given an integer n. You need to check if the number is prime or not.
Return true if it is a prime number, otherwise return false.
A prime number is a number which has no divisors except 1 and itself.*/

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) { //check the comment below for explanation of this condition
            return false;
        }
    }
    return true;
}
/*If a number isn't divisible by 2 or 3,
you can completely skip all multiples of 2 (4, 6, 8, 10...) and 3 (6, 9, 12, 15...).
Once you throw out all multiples of 2 and 3,
the only numbers left to check are: 5, 7,    11, 13,   17, 19,   23, 25,   29, 31...
Notice the pattern: They always come in pairs spaced by 2 (e.g., 5 and 5+2=7).
The loop jumps by 6 each time (i += 6) and checks both numbers in the pair (i and i + 2).*/