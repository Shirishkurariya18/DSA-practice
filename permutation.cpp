#include<iostream>
#include<vector>
using namespace std;    

void printPermutation(vector<int> &arr, vector<int> &ans, vector<bool> &visited) {
    if (ans.size() == arr.size()) {
        for (int j = 0; j < ans.size(); j++) {
            cout << ans[j] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (!visited[i]) {
            visited[i] = true; // mark as visited
            ans.push_back(arr[i]); // include the current element
            printPermutation(arr, ans, visited);
            ans.pop_back(); // backtrack
            visited[i] = false; // unmark
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store permutations
    vector<bool> visited(arr.size(), false); // track visited elements

    printPermutation(arr, ans, visited);

    return 0;
}