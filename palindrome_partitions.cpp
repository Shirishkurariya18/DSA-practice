#include<iostream>
#include<vector>
#include<string>
using namespace std;
// Function to check if a string is a palindrome
bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}
// Function to find all palindrome partitions of a string
void findPalindromePartitions(const string& s, int start, vector<string>& currentPartition, vector
<vector<string>>& result) {
    if (start >= s.size()) {
        result.push_back(currentPartition);
        return;
    }
    for (int end = start; end < s.size(); end++) {
        if (isPalindrome(s, start, end)) {
            currentPartition.push_back(s.substr(start, end - start + 1));
            findPalindromePartitions(s, end + 1, currentPartition, result);
            currentPartition.pop_back();
        }
    }
}
// Main function to demonstrate palindrome partitioning
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    vector<vector<string>> result;
    vector<string> currentPartition;
    findPalindromePartitions(s, 0, currentPartition, result);
    
    cout << "Palindrome partitions:\n";
    for (const auto& partition : result) {
        for (const auto& part : partition) {
            cout << part << " ";
        }
        cout << endl;
    }
    return 0;
}