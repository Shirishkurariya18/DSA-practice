#include <iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int candidate = arr[0];
    int count = 1;

    // Step 1: Find candidate
    for (int i = 1; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = arr[i];
                count = 1;
            }
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) count++;
    }

    if (count > n/2) return candidate;
    return -1; // No majority element
}

int main() {
    int arr[] = {2, 2, 1, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = majorityElement(arr, n);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element found" << endl;

    return 0;
}