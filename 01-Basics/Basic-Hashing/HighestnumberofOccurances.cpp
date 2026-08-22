//Highest Occurring Element in an Array
/*Given an array nums of n integers, find the most frequent element in it
i.e., the element that occurs the maximum number of times.
If there are multiple elements that appear a maximum number of times,
find the smallest of them.*/

#include <bits/stdc++.h>
using namespace std;
int highestOccurringElement(vector<int>& nums) {
    unordered_map<int, int> freq; // Create a hash map to store the frequency of each element
    for (int num : nums) {  // Iterate through the input array
        freq[num]++;
    }
    int maxFreq = 0;
    int result = INT_MAX;  // Initialize result to the maximum possible integer value
    for (const auto& p : freq) { // Iterate through the hash map to find the element with the highest frequency
        if (p.second > maxFreq || (p.second == maxFreq && p.first < result)) { // If the current element has a higher frequency or the same frequency but is smaller than the current result
            maxFreq = p.second;
            result = p.first;
        }
    }
    return result;
}