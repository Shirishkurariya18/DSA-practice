#include <iostream>
using namespace std;

void findPairWithSumSorted(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "(" << arr[left] << ", " << arr[right] << ")" << endl;
            return;
        }
        else if (sum < target) {
            left++;  // need a bigger sum
        }
        else {
            right--; // need a smaller sum
        }
    }

    cout << "No pair found" << endl;
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTarget = " << target << endl;

    cout << "Pair with given sum: ";
    findPairWithSumSorted(arr, n, target);

    return 0;
}