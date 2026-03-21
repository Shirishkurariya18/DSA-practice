#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    // Store the first element
    int temp = arr[0];
    
    // Shift all elements one position left
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Place the first element at the end
    arr[n - 1] = temp;
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

    cout << "Original Array: ";
    printArray(arr, n);

    leftRotateByOne(arr, n);

    cout << "Array after Left Rotation by 1: ";
    printArray(arr, n);

    return 0;
}