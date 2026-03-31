#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;  // Peak lies on the right side
        } else {
            right = mid;     // Peak lies on the left side (including mid)
        }
    }
    return nums[left];  // left == right, peak found
}

int main() {
    vector<int> arr = {1, 2, 3, 1};
    cout << "Peak element: " << findPeakElement(arr) << endl;
    return 0;
}