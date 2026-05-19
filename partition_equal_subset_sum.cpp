#include<iostream>
#include<vector>
using namespace std;
bool canPartition(vector<int>& nums) {
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }
    // If the total sum is odd, we cannot partition it into two equal subsets
    if (totalSum % 2 != 0) {
        return false;
    }
    int target = totalSum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true; // Base case: there's one way to achieve a sum of 0 (by choosing nothing)

    for (int num : nums) {
        for (int j = target; j >= num; --j) {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    return dp[target];
}

int main(){

    vector<int> nums = {1, 5, 10, 5};
    bool result = canPartition(nums);
    cout << "Can partition: " << (result ? "Yes" : "No") << endl;
    return 0;
}