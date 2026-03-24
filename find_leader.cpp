#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> findLeaders(int arr[], int n) {
    vector<int> leaders;
    int maxFromRight = arr[n - 1]; // last element is always a leader
    leaders.push_back(maxFromRight);

    // Traverse from right to left
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            leaders.push_back(arr[i]);
            maxFromRight = arr[i];
        }
    }

    // Leaders are collected in reverse order, so reverse them
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    vector<int> leaders = findLeaders(arr, n);

    cout << "Leaders in Array: ";
    for (int x : leaders) cout << x << " ";
    cout << endl;

    return 0;
}