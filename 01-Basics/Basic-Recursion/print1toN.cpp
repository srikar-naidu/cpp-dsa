//Print 1 to N using Recursion
/*Given an integer n, write a function to print all numbers from 1 to n (inclusive) using recursion.
You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in increasing order from 1 to n.*/

#include <bits/stdc++.h>
using namespace std;

void printNumbers(int current, int N) {
    if (current > N) // Base case
        return;
    cout << current << "\n";
    printNumbers(current + 1, N); //Recursive call to print the next number
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printNumbers(1, N);
    return 0;
}