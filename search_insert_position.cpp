#include<iostream>  
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return left; // left is the insertion point
    }
};

int main(){
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    Solution ob;
    int index = ob.searchInsert(nums, target);
    cout<<"The target "<<target<<" is at index: "<<index<<endl;

    target = 2;
    index = ob.searchInsert(nums, target);
    cout<<"The target "<<target<<" should be inserted at index: "<<index<<endl;

    target = 7;
    index = ob.searchInsert(nums, target);
    cout<<"The target "<<target<<" should be inserted at index: "<<index<<endl;

    target = 0;
    index = ob.searchInsert(nums, target);
    cout<<"The target "<<target<<" should be inserted at index: "<<index<<endl;

    return 0;
}