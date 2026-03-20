#include <iostream>
#include <vector>
using namespace std;

void moveZeros(vector<int>& arr) {
    int index = 0; // Position to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i]; // Move non-zero element forward
            index++;
        }
    }

    // Fill remaining positions with 0
    while (index < arr.size()) {
        arr[index] = 0;
        index++;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeros(arr);

    cout << "Output: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}