#include<iostream>
#include<vector>
using namespace std;

// bool isSorted(vector<int> arr, int n) {
//     if(n == 0 || n == 1){
//         return true;
//     }
// return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
// }


int binarySearch(vector<int>& arr, int tar, int st, int end ){
    if(st <= end){
        int mid = st + (end-st)/2;

        if(arr[mid] == tar) return mid;
        else if(arr[mid] <= tar){
            return binarySearch(arr, tar, mid+1, end);
        }else {
            return binarySearch(arr, tar,st, mid-1);
        }
    }
    return -1;
}
 
int main(){

// vector<int> arr = {1, 2, 5, 4, 5};
// int n = arr.size();
// cout << isSorted(arr, arr.size()) << endl;

vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int tar = 5;
cout << binarySearch(arr, tar, 0, arr.size()-1) << endl; // Output: 4
    return 0;
}
