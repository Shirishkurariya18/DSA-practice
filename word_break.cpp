#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string>& wordDict) {
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true; // empty string can always be segmented

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end()) {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main() {
    string s = "leetcode";
    vector<string> dict = {"leet", "code"};

    if (wordBreak(s, dict))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
