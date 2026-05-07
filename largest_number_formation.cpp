#include <bits/stdc++.h>
using namespace std;

string largestNumber(vector<string>& nums) {
    sort(nums.begin(), nums.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    if (!nums.empty() && nums[0] == "0") {
        return "0";
    }
    string result;
    for (const string& num : nums) {
        result += num;
    }
    return result;
}

int main() {
    int n;
    if (!(cin >> n)) {
        return 0;
    }
    vector<string> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << largestNumber(nums) << "\n";
    return 0;
}
