//Pattern-01
/*Given an integer n. You need to recreate the pattern given below for any value of N. 
Let's say for N = 5, the pattern should look like as below:

*****
*****
*****
*****
*****

Print the pattern in the function given to you.*/

#include <bits/stdc++.h>
using namespace std;
void pattern(int N) {
    for (int i = 0; i < N; i++) {        // Outer loop to handle rows
        for (int j = 0; j < N; j++) {    // Inner loop to handle columns for each row
            cout << "* ";
        }
        cout << endl;
    }
}
int main() {
    int N = 5;
    pattern(N);
    return 0;
}

