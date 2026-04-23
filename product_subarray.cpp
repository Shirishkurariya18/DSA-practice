// product subarray less than k
#include <iostream>
#include <vector>
using namespace std;
int numSubarrayProductLessThanK(const vector<int>& nums, int k) {
    if (k <= 1) return 0; // No products can be less than or equal to 1

    int count = 0;
    int product = 1;
    int left = 0;

    for (int right = 0; right < nums.size(); ++right) {
        product *= nums[right];

        while (product >= k) {
            product /= nums[left];
            left++;
        }

        count += right - left + 1; // All subarrays ending at 'right' and starting from 'left' to 'right'
    }

    return count;
}

int main() {
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    cout << numSubarrayProductLessThanK(nums, k) << endl; // Output: 8

    nums = {1, 2, 3};
    k = 0;
    cout << numSubarrayProductLessThanK(nums, k) << endl; // Output: 0

    return 0;
}