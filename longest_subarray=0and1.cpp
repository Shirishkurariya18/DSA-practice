// logest subarrya with = 0 and 1
#include<iostream>
using namespace std;

int longestSubarray(int arr[], int n){
    int maxLength = 0;
    for(int i = 0; i < n; i++){
        int count0 = 0, count1 = 0;
        for(int j = i; j < n; j++){
            if(arr[j] == 0){
                count0++;
            }
            else{
                count1++;
            }
            if(count0 == count1){
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    return maxLength;
}
int main(){
    int arr[] = {0, 1, 0, 1, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = longestSubarray(arr, n);
    cout << "Length of the longest subarray with equal number of 0s and 1s is: " << result << endl;
    return 0;
}