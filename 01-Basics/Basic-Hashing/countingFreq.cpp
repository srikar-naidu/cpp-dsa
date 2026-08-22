//Counting Frequencies of Array Elements
/*Given an array nums of size n which may contain duplicate elements.
Return a list of pairs where each pair contains a unique element from the array and its frequency in the array.
You may return the result in any order, but each element must appear exactly once in the output.*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> countingFreq(vector<int>& nums) { 
    unordered_map<int, int> freq; // Create a hash map to store the frequency of each element
    for (int num : nums) { // Iterate through the input array
        freq[num]++;
    }
    return vector<pair<int, int>>(freq.begin(), freq.end());; // Convert the hash map to a vector of pairs and return it
}