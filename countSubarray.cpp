#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void printSubarraysWithSum(int arr[], int n, int target) {
    unordered_map<int, vector<int>> prefixMap; // prefixSum → list of indices
    int prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // Case 1: If prefixSum itself equals target → subarray from 0..i
        if (prefixSum == target) {
            cout << "[";
            for (int k = 0; k <= i; k++) cout << arr[k] << (k < i ? " " : "");
            cout << "]" << endl;
        }

        // Case 2: If (prefixSum - target) exists → subarray(s) from index+1..i
        if (prefixMap.find(prefixSum - target) != prefixMap.end()) {
            for (int startIndex : prefixMap[prefixSum - target]) {
                cout << "[";
                for (int k = startIndex + 1; k <= i; k++) cout << arr[k] << (k < i ? " " : "");
                cout << "]" << endl;
            }
        }

        // Store current prefixSum index
        prefixMap[prefixSum].push_back(i);
    }
}

int main() {
    int arr[] = {1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTarget Sum = " << target << endl;

    cout << "Subarrays with Sum " << target << ":\n";
    printSubarraysWithSum(arr, n, target);

    return 0;
}