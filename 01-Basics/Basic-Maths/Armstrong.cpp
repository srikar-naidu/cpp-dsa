// Armstrong Number
/*You are given an integer n. You need to check whether it is an armstrong number or not.
Return true if it is an armstrong number, otherwise return false.



An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.*/

#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = to_string(n).length();  //total number of digits in the number
    while(n > 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum == original;
}