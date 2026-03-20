#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
    // Formula for sum of first N natural numbers
    int totalSum = N * (N + 1) / 2;

    // Calculate sum of given array
    int arraySum = 0;
    for (int num : arr) {
        arraySum += num;
    }

    // Missing number is the difference
    return totalSum - arraySum;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    vector<int> arr(N - 1);
    cout << "Enter " << N - 1 << " numbers: ";
    for (int i = 0; i < N - 1; i++) {
        cin >> arr[i];
    }

    cout << "Missing number: " << findMissingNumber(arr, N) << endl;
    return 0;
}