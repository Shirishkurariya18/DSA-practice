#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, pair<int,int>> longestSubarrayWithSumK(vector<int>& arr, int K) {
    unordered_map<int, int> prefixIndex; // prefixSum → first index
    int prefixSum = 0;
    int maxLen = 0;
    int start = -1, end = -1;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        // Case 1: If prefixSum itself equals K
        if (prefixSum == K) {
            if (i + 1 > maxLen) {
                maxLen = i + 1;
                start = 0;
                end = i;
            }
        }

        // Case 2: If (prefixSum - K) exists
        if (prefixIndex.find(prefixSum - K) != prefixIndex.end()) {
            int prevIndex = prefixIndex[prefixSum - K];
            int len = i - prevIndex;
            if (len > maxLen) {
                maxLen = len;
                start = prevIndex + 1;
                end = i;
            }
        }

        // Store prefixSum if not already stored (keep earliest index)
        if (prefixIndex.find(prefixSum) == prefixIndex.end()) {
            prefixIndex[prefixSum] = i;
        }
    }

    return {maxLen, {start, end}};
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int K = 3;

    auto result = longestSubarrayWithSumK(arr, K);
    int length = result.first;
    int start = result.second.first;
    int end = result.second.second;

    cout << "Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\nTarget Sum = " << K << endl;

    cout << "Length of Longest Subarray with Sum " << K << " = " << length << endl;
    cout << "Subarray: [ ";
    if (start != -1) {
        for (int i = start; i <= end; i++) cout << arr[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}