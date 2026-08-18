//Pattern-06
/*Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *

Print the pattern in the function given to you.*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int N) {
    for (int i = 1; i <= N; i++) {
        // INNER LOOP 1: Prints spaces before the stars on each row
        // On row i, it prints (i - 1) spaces to push stars to the center
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        // INNER LOOP 2: Prints the stars for the inverted pyramid
        // On row i, it prints (2 * (N - i) + 1) stars to form an odd-numbered inverted pyramid
        for (int j = 1; j <= 2 * (N - i) + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int N = 5;
    pattern(N);
    return 0;
}