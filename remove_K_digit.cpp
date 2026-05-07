#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    int n = num.size();
    if (k >= n) return "0";
    string result;
    for (char digit : num) {
        while (!result.empty() && k > 0 && result.back() > digit) {
            result.pop_back();
            k--;
        }
        if (!result.empty() || digit != '0') {
            result.push_back(digit);
        }
    }
    while (!result.empty() && k > 0) {
        result.pop_back();
        k--;
    }
    if (result.empty()) return "0";
    return result;
}

int main() {
    string num;
    int k;
    cout << "Enter number string: ";
    if (!(cin >> num)) return 0;
    cout << "Enter k: ";
    if (!(cin >> k)) return 0;
    string answer = removeKdigits(num, k);
    cout << answer << "\n";
    return 0;
}
