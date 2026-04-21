#include<iostream>
#include<vector>
using namespace std;

// Minimum Number of Jumps to Reach End

int minJumps(const vector<int>& nums) {
    if (nums.empty() || nums[0] == 0) {
        return -1; // Cannot move anywhere
    }

    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (size_t i = 0; i < nums.size() - 1; ++i) {
        farthest = max(farthest, static_cast<int>(i) + nums[i]);

        if (i == currentEnd) {
            jumps++;
            currentEnd = farthest;

            if (currentEnd >= static_cast<int>(nums.size() - 1)) {
                break; // Reached or exceeded the end
            }
        }
    }

    return (currentEnd >= static_cast<int>(nums.size() - 1)) ? jumps : -1;
}

int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    int result = minJumps(nums);
    if (result != -1) {
        cout << "Minimum number of jumps to reach the end: " << result << endl;
    } else {
        cout << "Cannot reach the end." << endl;
    }

    return 0;
}