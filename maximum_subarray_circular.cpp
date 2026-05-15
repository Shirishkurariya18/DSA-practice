#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Standard Kadane's algorithm to find max subarray sum
int kadaneMax(const vector<int>& nums) {
    int maxSum = nums[0], currSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currSum = max(nums[i], currSum + nums[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

// Kadane's algorithm to find min subarray sum
int kadaneMin(const vector<int>& nums) {
    int minSum = nums[0], currSum = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        currSum = min(nums[i], currSum + nums[i]);
        minSum = min(minSum, currSum);
    }
    return minSum;
}

int maxCircularSubarraySum(vector<int>& nums) {
    int maxNormal = kadaneMax(nums);  // Case 1: normal max subarray
    int totalSum = 0;
    for (int num : nums) totalSum += num;

    int minSubarray = kadaneMin(nums); // Case 2: circular max = totalSum - minSubarray

    // Edge case: if all numbers are negative, maxNormal is the answer
    if (maxNormal < 0) return maxNormal;

    return max(maxNormal, totalSum - minSubarray);
}

int main() {
    vector<int> nums = {5, -3, 5};
    cout << "Maximum Circular Subarray Sum = " << maxCircularSubarraySum(nums) << endl;
    return 0;
}
