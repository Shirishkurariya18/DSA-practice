#include <iostream>
#include <algorithm> // for reverse
using namespace std;

// Function to right rotate array by k positions
void rightRotate(int arr[], int n, int k) {
    k = k % n; // handle cases where k > n

    // Step 1: Reverse entire array
    reverse(arr, arr + n);

    // Step 2: Reverse first k elements
    reverse(arr, arr + k);

    // Step 3: Reverse remaining n-k elements
    reverse(arr + k, arr + n);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Original Array: ";
    printArray(arr, n);

    rightRotate(arr, n, k);

    cout << "Array after Right Rotation by " << k << ": ";
    printArray(arr, n);

    return 0;
}