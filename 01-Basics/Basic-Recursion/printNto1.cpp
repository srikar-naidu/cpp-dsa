//Print N to 1 using Recursion
/*Given an integer n,
write a function to print all numbers from n to 1 (inclusive) using recursion.
You must not use any loops such as for, while, or do-while.
The function should print each number on a separate line, in decreasing order from n to 1*/

#include <bits/stdc++.h>
using namespace std;
void printNumbers(int current, int N) {
    if (current < 1) // Base case
        return;
    cout << current << "\n";
    printNumbers(current - 1, N); //Recursive call to print the next number
}
int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    printNumbers(N, 1);
    return 0;
}