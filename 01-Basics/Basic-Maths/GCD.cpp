// GCD of two numbers
/*You are given two integers n1 and n2.
You need find the Greatest Common Divisor (GCD) of the two given numbers.
Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.*/

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while(a > 0 && b > 0) {    // a and b are greater than 0
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}
