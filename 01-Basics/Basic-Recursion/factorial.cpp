//Factorial
/*You are given an integer n. Return the value of n! or n factorial.
Factorial of a number is the product of all positive integers less than or equal to that number.*/

#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
    if (n == 0) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive call to calculate the factorial
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}