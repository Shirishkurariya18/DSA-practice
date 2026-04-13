#include<iostream>
#include<algorithm>
using namespace std;

int main(){

int arr[] = {1,2,3,4,5,6,7,8,9};
int n = sizeof(arr)/sizeof(arr[0]);
// sort(arr, arr + n);
for(int i = 0; i < n; i++){
    if(arr[i] < arr[0]){
        swap(arr[i], arr[0]);
    }   else if(arr[i] > arr[n - 1]){
        swap(arr[i], arr[n - 1]);
}
}
cout << "Minimum element: " << arr[0] << endl;
cout << "Maximum element: " << arr[n - 1] << endl;
}