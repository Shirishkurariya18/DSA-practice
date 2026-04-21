#include<iostream>
#include<vector>
using namespace std;

bool canJump(const vector<int>& nums) {
    int maxReach = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i > maxReach) {
            return false; // Cannot reach this position
        }
        maxReach = max(maxReach, static_cast<int>(i) + nums[i]);
    }
    return true; // Can reach the end
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    if (canJump(nums)) {
        cout << "Can jump to the end." << endl;
    } else {
        cout << "Cannot jump to the end." << endl;
    }

    return 0;
}