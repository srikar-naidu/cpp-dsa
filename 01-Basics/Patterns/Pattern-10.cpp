//Pattern-10
/*Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

E 
D E 
C D E 
B C D E 
A B C D E

Print the pattern in the function given to you.*/

#include<bits/stdc++.h>
using namespace std;
void pattern(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + N - 1 - i + j) << " ";
        }
        cout << endl;
    }
}int main() {
    int N = 5;
    pattern(N);
    return 0;
}