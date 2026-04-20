// For each element, return product of all other elements (no division).

#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(const vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    // Calculate left products
    for (int i = 1; i < n; ++i) {
        result[i] = result[i - 1] * nums[i - 1];
    }

    // Calculate right products and multiply with left products
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
}

int main(){

    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Input: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << "\nOutput: ";
    for (int prod : result) {
        cout << prod << " ";
    }
    cout << endl;

    return 0;
}