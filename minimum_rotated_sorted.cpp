#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int mid = left + (right - left) / 2;
            if(nums[mid] > nums[right]) left = mid + 1; // Minimum is in the right half
            else right = mid; // Minimum is in the left half (including mid)
        }
        return nums[left]; // left is the index of the minimum element
    }
};  

int main(){
    vector<int> nums = {3, 4, 5, 1, 2};
    Solution ob;
    int minElement = ob.findMin(nums);
    cout<<"The minimum element in the rotated sorted array is: "<<minElement<<endl;

    nums = {4, 5, 6, 7, 0, 1, 2};
    minElement = ob.findMin(nums);
    cout<<"The minimum element in the rotated sorted array is: "<<minElement<<endl;

    nums = {11, 13, 15, 17};
    minElement = ob.findMin(nums);
    cout<<"The minimum element in the rotated sorted array is: "<<minElement<<endl;

    return 0;
}