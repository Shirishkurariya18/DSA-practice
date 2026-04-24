#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> charIndexMap; // Map to store the last index of each character
    int maxLength = 0;
    int left = 0; // Left pointer of the sliding window

    for (int right = 0; right < s.length(); ++right) {
        char currentChar = s[right];

        // If the character is already in the map and its index is within the current window
        if (charIndexMap.find(currentChar) != charIndexMap.end() && charIndexMap[currentChar] >= left) {
            left = charIndexMap[currentChar] + 1; // Move the left pointer to the right of the last occurrence
        }

        charIndexMap[currentChar] = right; // Update the last index of the current character
        maxLength = max(maxLength, right - left + 1); // Update max length if needed
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 3

    s = "bbbbb";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 1

    s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 3

    return 0;
}