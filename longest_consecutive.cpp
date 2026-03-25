#include <iostream>
#include <unordered_set>
using namespace std;

int longestConsecutive(int arr[], int n) {
    unordered_set<int> s;

    // Insert all elements into the set
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }

    int longest = 0;

    // Check each element
    for (int i = 0; i < n; i++) {
        // Only start counting if arr[i] is the beginning of a sequence
        if (s.find(arr[i] - 1) == s.end()) {
            int currentNum = arr[i];
            int currentStreak = 1;

            // Count consecutive numbers
            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                currentStreak++;
            }

            longest = max(longest, currentStreak);
        }
    }

    return longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int result = longestConsecutive(arr, n);
    cout << "Length of Longest Consecutive Sequence: " << result << endl;

    return 0;
}