#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string sortString(string s) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        
        string result;
        while (result.size() < s.size()) {
            // Append characters in increasing order
            for (int i = 0; i < 26; i++) {
                if (count[i] > 0) {
                    result += (i + 'a');
                    count[i]--;
                }
            }
            // Append characters in decreasing order
            for (int i = 25; i >= 0; i--) {
                if (count[i] > 0) {
                    result += (i + 'a');
                    count[i]--;
                }
            }
        }
        
        return result;
    }
};


int main() {
    Solution solution;
    string s = "adfgh";
    
    string sortedString = solution.sortString(s);
    cout << "Sorted String: " << sortedString << endl; // Output: "abccbaabccba"
    
    return 0;
}