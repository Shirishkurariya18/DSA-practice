#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int i = 0, j = 0;
        
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size()) {
                result += word1[i++];
            }
            if (j < word2.size()) {
                result += word2[j++];
            }
        }
        
        return result;
    }
};

int main() {
    Solution solution;
    string word1 = "abc";
    string word2 = "defg";
    
    string mergedString = solution.mergeAlternately(word1, word2);
    cout << "Merged String: " << mergedString << endl; // Output: "adbcefg"
    
    return 0;
}