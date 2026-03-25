#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArrayBySign(int arr[], int n) {
    vector<int> pos, neg;

    // Separate positives and negatives
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    vector<int> result;
    int i = 0, j = 0;

    // Alternate placement
    while (i < pos.size() && j < neg.size()) {
        result.push_back(pos[i++]);
        result.push_back(neg[j++]);
    }

    // Add remaining positives
    while (i < pos.size()) result.push_back(pos[i++]);

    // Add remaining negatives
    while (j < neg.size()) result.push_back(neg[j++]);

    return result;
}

int main() {
    int arr[] = {1, -2, -3, -4, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> result = rearrangeArrayBySign(arr, n);

    cout << "Rearranged Array: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}