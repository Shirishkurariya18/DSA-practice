#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Minimum element is: " << arr[0] << endl;
    cout << "Maximum element is: " << arr[n - 1] << endl;

    cout << "Difference between maximum and minimum is: " << arr[n - 1] - arr[0] << endl;
    return 0;
}