//Print Name N times using Recursion
/*Problem Description: Given an integer N, write a program to print your name N times.*/

#include <bits/stdc++.h>
using namespace std;
void printName(string name, int count, int N) {
    if (count == N) //base case
        return;
    cout << name << "\n";
    printName(name, count + 1, N);
};
int main(){
    int N;
    cout << "Enter the number of times to print your name: ";
    cin >> N;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    printName(name, 0, N);
}
