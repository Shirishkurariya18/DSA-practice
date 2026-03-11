#include<iostream>
using namespace std;

int main(){
 int arr[] = {5,8,9,10,6};
 int n = sizeof(arr)/sizeof(arr[0]);
for(int i = 0; i < n-1; i++){
    for(int j = 1; j < n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
for(int i = 0; i < n; i++){
    cout<< arr[i] << endl;
}
cout<< "second largest element in an array is : " << arr[n-2] << endl;
 return 0;
}