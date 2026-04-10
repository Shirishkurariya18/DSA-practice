#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){

    int arr[] = {5,4,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // sort(arr, arr+n);
    // cout << "Second smallest element is: " << arr[1] << endl;

// without sort function

    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest){
            second_smallest = arr[i];
        }
    }

    cout << "second smallest element is: " << second_smallest << endl;



    return 0;

}