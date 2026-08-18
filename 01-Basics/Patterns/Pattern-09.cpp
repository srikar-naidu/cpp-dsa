//Pattern-09
/*Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321

Print the pattern in the function given to you.*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {          // Print the increasing sequence
            cout << j;
        }
        for (int j = 1; j <= 2 * (N - i); j++) {      // Print spaces
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {        // Print the decreasing sequence
            cout << j;
        }
        cout << endl;
    }
}
int main() {
    int N = 5;
    pattern(N);
    return 0;
}