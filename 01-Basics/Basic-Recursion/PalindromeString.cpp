//Check if String is Palindrome or Not
/*Given a string s, return true if the string is palindrome, otherwise false.
A string is called palindrome if it reads the same forward and backward.*/

#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int start, int end) { //int because we are using index of string
    if (start >= end) { //because if start is greater than end then it means we have checked all the characters and they are same so it is palindrome
        return true; 
    }
    if (s[start] != s[end]) { //because if the characters at start and end are not same then it is not palindrome
        return false;
    }
    return isPalindrome(s, start + 1, end - 1); //recursion because we are checking the next characters
}
bool checkPalindrome(string s) {
    int n = s.length();
    return isPalindrome(s, 0, n - 1); //calling the recursive function because we are checking the whole string
}