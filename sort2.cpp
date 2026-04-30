#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n); // Sorts the array in ascending order
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    return 0;
}