#include<iostream>
#include<vector>
#include<string>
using namespace std;
int numDecodings(string s) {
    if (s.empty() || s[0] == '0') {
        return 0;
    }
    int n = s.size();
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // Base case: there's one way to decode an empty string
    dp[1] = 1; // Base case: there's one way to decode a single character (if it's not '0')

    for (int i = 2; i <= n; ++i) {
        // Check the last single digit
        if (s[i - 1] != '0') {
            dp[i] += dp[i - 1];
        }
        // Check the last two digits
        int twoDigit = stoi(s.substr(i - 2, 2));
        if (twoDigit >= 10 && twoDigit <= 26) {
            dp[i] += dp[i - 2];
        }
    }
    return dp[n];
}

int main() {
    string s = "226";
    int result = numDecodings(s);
    cout << "Number of ways to decode \"" << s << "\": " << result << endl;
    return 0;
}