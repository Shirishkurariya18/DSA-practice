#include <iostream>
using namespace std;

int main() {
    int arr[] = {-1, 2, 3, -4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            cout << arr[i] << " ";
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
